#pragma once
#include <string>
#include <list>
#include <map>
#include <vector>

using namespace std;

class nPc {
private: 
	string fname, lname;
	int iD, bloodline;
	int Age;
	int loyalty;
	int factionID;
	int level;
	int exp;
	attri npcAttri;
	vector<item> npcDrops;
public:
	void setName(string first, string last) { fname = first;
	lname = last;
	};
	void setID(int id) {
		iD = id;
	};
	void setBlood(int blood) { bloodline = blood; };
	void setAge(int age) {
		Age = age; };
	void setLoyalty(int loyal) { 
		loyalty = loyal; };
	void setLevel(int levels) {
		level = levels;
	};
	string getName() { return (fname + " " + lname); };
	int getID() { return iD; };
	int getBlood() { return bloodline; };
	int getAge() { return Age; };
	int getLoyalty() { return loyalty; };
	int getFactID() { return factionID; };
	int getLevel() { return level; };
	int getExp() { return exp; };
	attri getAttri() {
		return npcAttri;
	}
	stats* getStats() {
		return npcAttri->getStats();
	}
	physical* getPhys() {
		return npcAttri->getPhys();
	}
};

typedef class npcAttribute {
	physical* physcials;
	stats* npcStats;
public:
	void setPhyical(physical* physcial) { physcials = physcial; };
	void setStats(stats* stat) {
		npcStats = stat;};
	physical* getPhys() { return physcials; };
	stats* getStats() {
		return npcStats;
	}
}* attri;


class item {
	int itemID;
	string name, description;
	map<string, int> effects;
public: 
	void setID(int id) { itemID = id; };
	void setName(string itemName) { name = itemName; };
	void setDesc(string desc) { description = desc; };
};


class physical {
	string hairID, eyesID, bodyType, faceId;
	int gender;
public:
	void setHair(string id) { hairID = id; };
	void setEyes(string id) {
		eyesID = id;
	};
	void setGender(int id) {
		gender = id;
	};
	void setBody(string id) {
		bodyType = id;
	};
	void setface(string id) {
		faceId = id;
	};
};

class stats {
	int Endurance, strength, healthPoints, Dexterity, Intelligence;
public:
	void setEndurance(int endur) {
		Endurance = endur;
	};
	void setStrength(int str) { strength = str; };
	void setHealth(int health) { healthPoints = health; };
	void setDex(int dex) { Dexterity = dex; };
	void setIntel(int intel) { Intelligence = intel; };
};

class faction {
	int factionId, Region;
	string factionName;
public:
	void setFac(int id) { factionId = id; };
	void setName(string name) { factionName = name; };
	void setRegion(int region) { Region = region; };
};
  

class quest {
	int questID, assignedBy;
	string MainObjective;
	int reward;
	bool completed = false;
public:
	void setID(int id) { questID = id; };
	void setBy(int assigned) {
		assignedBy = assigned;
	};
	void setObjec(string object) {
		MainObjective = object;
	};
	void setReward(int Reward) { reward = Reward; };
	void complete() { completed = true; }
};

template<class inside> class location{
	int x, y; 
	inside* atPosition;
};

template<class gridObj> class grid {
	int width, height;
	gridObj* grids;
public:
	void createGrid() {
		gridObj* x;
		x = new gridObj[width][height];
		grids = x;

	};
	void setWidth(int x) { width = x; };
	void setHeight(int y) { height = y; };
};

