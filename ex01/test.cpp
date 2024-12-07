# include <iostream>


class dad
{
    private :
        int bloudtyp = 2;
    public :
    std::string origins;
    std::string nickname;
    dad(std::string _origins , std::string _nickname);
    void info_display();
};

class son : public dad
{
    public :
        std::string son_origins;
        std::string son_nickname;
        son();
        void son_info_display()
        {
            std::cout << "the origins of the son is " << this->origins <<
                " and his nickname is " << this->nickname << std::endl;             
        };

};

son::

dad::dad(std::string _origins , std::string _nickname)
{
    origins = _origins;
    nickname = _nickname;
}
void dad::info_display()
{
    std::cout << "the origins of the dad is " << this->origins << " and his nickname is " << this->nickname << std::endl; 
}

int main ()
{
    dad samad("riffians","kajjou");
    son ayman;

    samad.info_display();

}