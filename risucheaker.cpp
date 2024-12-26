#include <bits\stdc++.h>
using namespace std;

vector<string> tokenize(const string &text)
{
    vector<string> words;
    string word;
    for (char c : text)
    {
        if (isalnum(c))
        {
            word += c;
        }
        else if (!word.empty())
        {
            words.push_back(word);
            word = "";
        }
    }
    if (!word.empty())
    {
        words.push_back(word);
    }
    return words;
}

double jaccard_similarity(const vector<string> &words1, const vector<string> &words2)
{
    set<string> set1(words1.begin(), words1.end());
    set<string> set2(words2.begin(), words2.end());

    int intersection = 0, unionn = 0;
    for (const string &word : set1)
    {
        if (set2.count(word) > 0)
        {
            intersection++;
        }
    }

    unionn = set1.size() + set2.size() - intersection;
    if (unionn == 0)
    {
        return 0.0;
    }
    else
    {
        return static_cast<double>(intersection) / unionn;
    }
}

void check_file_similarity(const vector<string> &lines1, const vector<string> &lines2)
{
    int total_similar_lines = 0;
    int total_lines = max(lines1.size(), lines2.size());
    for (int i = 0; i < total_lines; ++i)
    {
        vector<string> words1, words2;
        if (i < lines1.size())
        {
            words1 = tokenize(lines1[i]);
        }
        if (i < lines2.size())
        {
            words2 = tokenize(lines2[i]);
        }
        double sim = jaccard_similarity(words1, words2);
        if (sim != sim)
        {
            sim = 0.0;
        }
        if (sim == 1.0)
        {
            total_similar_lines++;
        }
    }

    double similarity_percentage;
    if (total_lines == 0)
    {
        similarity_percentage = 0.0;
    }
    else
    {
        similarity_percentage = static_cast<double>(total_similar_lines) / total_lines * 100;
    }

    cout << "\nTotal plagiarism percentage: " << similarity_percentage << "%" << endl << endl;
}

int main()
{
    string file1 = "document1.txt";
    string file2 = "document2.txt";
    ifstream f1(file1), f2(file2);
    if (!f1 || !f2)
    {
        cout << "\nError opening files."<<endl<<endl;
        return 1;
    }

    vector<string> lines1, lines2;
    string line;
    while (getline(f1, line))
    {
        lines1.push_back(line);
    }
    while (getline(f2, line))
    {
        lines2.push_back(line);
    }

    check_file_similarity(lines1, lines2);

    return 0;
}