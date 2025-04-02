#include <stdexcept>
#include <iostream>

void func_v6(double x){
    throw x; 
}
    
void func_v5(double x){
    try{
        func_v6(x*0.5);
    } catch (int e){
        std::cout << "Caught in func№5" << '\n';
    }
}
void func_v4(double x){
    try{
        func_v5(x*0.5);
    } catch (int e){
        std::cout << "int Caught in func№4" << '\n';
    }
}
void func_v3(double x){
    try{
        func_v4(x*0.5);
    } catch (int e){
        std::cout << "int Caught in func№3" << '\n';
    }
    catch (double  e){
        std::cout << "double Caught in func№3" << '\n';
    }
}
void func_v2(double x){
    try{
        func_v3(x*0.5);
    } catch (double e){
        std::cout << "Caught in func№2" << '\n';
    }
}