/*
 * Copyright (C) 2017 Luc Bergeron
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

/* 
 * File:   Singleton.h
 * Author: Luc Bergeron
 *
 * Created on July 18, 2017, 9:07 PM
 */

#ifndef SINGLETON_H
#define SINGLETON_H

class Singleton
{
public:
    //Disable Ctor and copy ctor
    Singleton(const Singleton& other) = delete;
    Singleton(Singleton&& other) = delete;
    
    //Disable copy and move assignments.
    Singleton& operator=(const Singleton& other) = delete;
    Singleton& operator=(Singleton&& other) = delete;
    
protected:
    Singleton() = default;
    
    virtual ~Singleton() = default;
};



#endif /* SINGLETON_H */

