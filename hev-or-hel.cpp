#include <iostream>
#include <ctime>

void game();
void win();
void loss();

int main()
{
std::string Beg = "";
 do{
    std::cout << "############ TSA_TRAINING ###############\n";
    std::cout << "Welcome To TSA Training Here Your Job is\n";
    std::cout << "To Make Sure No one Bad Gets On The Plane\n";
    std::cout << "Just Make Sure Their Id is Not Fake And\n";
    std::cout << "They Have No Contraband And Thats It\n";
    std::cout << "Type Start To Begin:";
    std::cin >> Beg;
    if (Beg == "Start")
    {
      game();
    }
  }while(Beg != "Start");
 return 0;    
}




void game()
{
std::string Names[] = {"Johnny","Milsa","GaryVee","Josh","Randy","Russle","berry","Gunner","gojo"};
int ids[] ={455,778,455,788,908,788,245}; 
std::string states[] = {"Utah","Uusa","Usa","Uk","Africa","Ricaa","Hawai"};

std::string Bod = "";
std::string Gurn = "";
bool isbad = false;
bool forever = true;
srand(time(NULL));
int rs = (rand() % 8);
int rn = (rand() % 10);
int rid =(rand() % 9);

int id = ids[rid];
std::string NAME = Names[rn];
std::string HomeState = states[rs];


    std::cout << "\n\n############ Game ###############\n";
    std::cout << "Hi I Would like To get through Tsa Here Is My Pass Port\n";
    std::cout << "    *****************************\n";
    std::cout << "    Name:"<< NAME << '\n';
    std::cout << "    id:"  << id << '\n'; 
    std::cout << "    HomeState:" << HomeState << '\n';
    std::cout <<"1:blacklist\n";
    std::cout <<"2:Fake State List\n";
    std::cout <<"3:invalid ids\n";
    std::cout <<"4:State if this is valid or not\n";

while(forever == true)
{
std::cin >> Gurn;
if(Gurn == "1")
std::cout << "Johnny,GaryVee,Randy,gojo\n";
else if(Gurn == "2")
{
std::cout << "Ricaa,Uusa,Uk\n";
}
else if (Gurn == "3")
{
std::cout << "908,788,245\n";
}
else if(Gurn == "4")
{
std::cout <<"Is This Valid:";
std::cin >>Bod;
forever = false;
}
}


if(NAME == "Johnny"|| NAME == "gojo"|| NAME == "Randy" || NAME == "GaryVee")
{
  isbad = true;
}
if(id == 908 || id == 788 || id == 245 )
{
  isbad = true;
}
if(HomeState == "Ricaa" || HomeState == "Uusa" || HomeState == "Uk")
{
  isbad = true;
}
if (isbad && Bod == "no")
{
win();
}
else if(!isbad && Bod == "yes") 
{
win();
}
else
{
  loss();
}

}

void win()
{
std::string answer = "";
std::cout << "\nYour Training Was A Sucses Would You Like To Go Again:";
std::cin >> answer;

if(answer == "yes")
{
 game(); 
}
else
{
  int Gorb = 3;
  Gorb += 5;
}
}


void loss()
{
std::string answer = "";
std::cout << "\nYour Training Falied Do Better Next Time!!!. Would You Like To Go Again?.:";
std::cin >> answer;

if(answer == "yes")
{
 game(); 
}
else
{
int orb = 3;
orb += 5;
}
}