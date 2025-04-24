/*
A sligtly simpler implementation of the std::variant 


- create a class temp that takes variadic pack that contains all types


*this should be legal*
Variant<int>
 Variant<float, bool>
 Variant<std::string, Variant<int>>
 Variant<int, bool, float>

 etc

 

*/