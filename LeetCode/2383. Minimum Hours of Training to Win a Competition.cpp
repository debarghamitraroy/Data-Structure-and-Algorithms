class Solution {
public:
    int minNumberOfHours(int initialEnergy, int initialExperience, vector<int>& energy, vector<int>& experience) {
        int n = energy.size();
        int additionalEnergy = 0;
        for (int i = 0; i < n; i++) {
            if (initialEnergy <= energy[i]) {
                additionalEnergy = additionalEnergy + energy[i] - initialEnergy + 1;
                initialEnergy = energy[i] + 1;
            }
            initialEnergy = initialEnergy - energy[i];
        }
        int additionalExperience = 0;
        for (int i = 0; i < n; i++) {
            if (initialExperience <= experience[i]) {
                additionalExperience = additionalExperience + experience[i] - initialExperience + 1;
                initialExperience = experience[i] + 1;
            }
            initialExperience = initialExperience + experience[i];
        }
        int totalAdditionalHours = (additionalEnergy + additionalExperience);
        return totalAdditionalHours;
    }
};
