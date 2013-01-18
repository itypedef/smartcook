#pragma once

#include <string>
#include <vector>

using std::string;
using std::vector;

enum EEntityType {
    ET_UNKNOWN = 0,
    ET_INGREDIENT = 1,
    ET_DISH_TYPE = 2,
    ET_SIZE
};

class TEntity {
public:
    TEntity();

    bool operator<(const TEntity& other) const;

private:
    EEntityType Type; // ex.: ingredient, dish type
    string Value;     // "potato", "vegetarian"

    bool MustBeInDoc; // True if entity must be in searched document, false otherwise
};

class TQuery {
public:
private:
    vector<TEntity> Entities;
};
