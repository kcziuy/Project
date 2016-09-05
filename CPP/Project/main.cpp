#include <iostream>
#include <cstdlib>

class pixel{
    public:
        int getR(){
            return this->R;
        }
        int getG(){
            return this->G;
        }
        int getB(){
            return this->B;
        }
        void setRGB(int a, int b, int c){
            this->R = a;
            this->G = b;
            this->B = c;
        }
    private:
        int R, G, B;
};
/*class Pic{
    private:
        int weight, height;
        pixel** allpix;
};
void load(char*);
void make_grey();
void cut();,
void save(char*);

Pic pic;*/
using namespace std;
int main()
{
    const int h = 15, w = 20;
    pixel pixmap[h][w];
    //some nums
    for(int i = 0; i<h; i++){
        for(int j = 0; j<w; j++){
        pixmap[i][j].setRGB(rand()%256,rand()%256,rand()%256);
        cout <<"[" << pixmap[i][j].getR() << " " << pixmap[i][j].getG() << " " << pixmap[i][j].getB() << "] ";
        }
    cout << endl;
    }
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;

    for(int i = 0; i<h; i++){
        for(int j = 0; j<w; j++){
        int r = pixmap[i][j].getR();
        int g = pixmap[i][j].getG();
        int b = pixmap[i][j].getB();
        int out = (r+g+b)/3;
        pixmap[i][j].setRGB(out,out,out);
        cout <<"[" << pixmap[i][j].getR() << " " << pixmap[i][j].getG() << " " << pixmap[i][j].getB() << "] ";
        }
    cout << endl;
    }
    /*char adress[] = "picture.png";
    load(adress);
    make_grey();
    cut();
    save(adress);*/
}

/*void load(char* a){


}

void make_grey(){


}

void cut(){


}

void save(char* a){


}
*/
