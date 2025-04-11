#include <stdexcept>
#include <iostream>

void func_v6(double x){
    std::cout << "\nFunc №6 called\n";
    std::cout << "\nThrowing double...\n";
    throw x; 
}
    
void func_v5(double x){
    std::cout << "\nFunc №5 called\n";
    try{
        std::cout << "\nFunc №5 calling func №6\n";
        func_v6(x*0.5);
        std::cout << "\nFunc №5 successfully called №6\n";
    } catch (int e){
        std::cout << "\nCaught in func№5" << '\n';
    }
    std::cout << "\nFunc №5 finally\n";
}
void func_v4(double x){
    std::cout << "\nFunc №4 called\n";
    try{
        std::cout << "\nFunc №4 calling func №5\n";
        func_v5(x*0.5);
        std::cout << "\nFunc №4 successfully called №5\n";
    } catch (int e){
        std::cout << "int Caught in func№4" << '\n';
    }
    std::cout << "\nFunc №4 finally\n";
}
void func_v3(double x){
    std::cout << "\nFunc №3 called\n";
    try{
        std::cout << "\nFunc №3 calling func №4\n";
        func_v4(x*0.5);
        std::cout << "\nFunc №3 successfully called №4\n";
    } catch (int e){
        std::cout << "int Caught in func№3" << '\n';
    }
    catch (double  e){
        std::cout << "\nDouble caught in func№3" << '\n';
    }
    std::cout << "\nFunc №3 finally\n";
}
void func_v2(double x){
    std::cout << "\nFunc №2 called\n";
    try{
        std::cout << "\nFunc №2 calling func №3\n";
        func_v3(x*0.5);
        std::cout << "\nFunc №2 successfully called №3\n";
        x += 100;
    } catch (double e){
        std::cout << "Double caught in func№2" << '\n';
    }
    std::cout << "\nFunc №2 finally\n";
}