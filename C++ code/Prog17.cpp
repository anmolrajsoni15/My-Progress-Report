#include <iostream>
#include <cstring>
using namespace std;

class CWH
{
protected:
    string title;
    float rating;

public:
    CWH(string s, float r)
    {
        title = s;
        rating = r;
    }
    virtual void display() {}
};

class CWHvideo : public CWH
{
    float video_length;

public:
    CWHvideo(string s, float r, float vl) : CWH(s, r)
    {
        video_length = vl;
    }
    void display()
    {
        cout << "This is an amazing video with title " << title << endl;
        cout << "Ratings: " << rating << " out of 5 stars" << endl;
        cout << "Length of this video is: " << video_length << " minutes" << endl;
    }
};

class CWHtext : public CWH
{
    int words;

public:
    CWHtext(string s, float r, int wl) : CWH(s, r)
    {
        words = wl;
    }
    void display()
    {
        cout << "This is an amazing text tutorial with title " << title << endl;
        cout << "Ratings of this text tutorial: " << rating << " out of 5 stars" << endl;
        cout << "No of words in this text tutorial is: " << words << " words" << endl;
    }
};
int main()
{
    string title;
    float rate, vlen;
    int words;

    // for Code With Harry Video
    title = "Django tutorial";
    vlen = 4.56;
    rate = 4.89;
    CWHvideo djVideo(title, rate, vlen);
    // djVideo.display();
    // cout<<endl;

    // for Code With Harry Text
    title = "Django tutorial Text";
    words = 433;
    rate = 4.19;
    CWHtext djText(title, rate, words);
    // djText.display();

    CWH *cwh[2];
    cwh[0] = &djVideo;
    cwh[1] = &djText;

    cwh[0]->display();
    cout << endl;
    cwh[1]->display();
    return 0;
}