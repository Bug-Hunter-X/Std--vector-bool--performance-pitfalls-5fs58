std::vector<bool> vec; // This is a special case
vec.push_back(true);
vec.push_back(false);
// ... other operations
bool b = vec[0]; // This might be surprisingly slow!