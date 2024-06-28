#include <iostream>
#include <vector> 
class Card{
    private:
    std::string Name = "";
    float Strenght = 0;
    std::string Color = "";
    
    public:
    Card(float strenght,std::string name,std::string color){
        Strenght=strenght;
        Name=name;
        Color=color;
    }
    void display()const{
        std::cout << Name<< " " << Color << " " << Strenght << " ";
    }
};

std::string cardNameList[13]={"dwojka","trojka","czworka","piatka","szostka","siodemka","osemka","dziewiatka","dziesiatka","jopek","krolowa","krol","As"};
std::string cardTypeList[4]={"Trefl","Karo","Kier","Pik"};

int main(){
std::vector <Card> deck;
for (int i=0;i<13;i++){
    for(int j=0;j<4;j++){
        float strenght=i+j*0.1;
        Card cart(strenght,cardNameList[i],cardTypeList[j]);
        deck.push_back(cart);
    }  
}
for (const auto& x:deck){
    x.display(); 
}


















}


