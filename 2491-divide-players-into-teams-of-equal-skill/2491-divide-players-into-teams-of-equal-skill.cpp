class Solution {
public:
    long long dividePlayers(std::vector<int>& skill) {
        std::sort(skill.begin(), skill.end());
        int n = skill.size();
        int targetSkill = skill[0] + skill[n - 1];
        long long chemistry = 0;

        for (int i = 0; i < n / 2; i++) {
            int teamSkill = skill[i] + skill[n - i - 1];
            if (teamSkill != targetSkill) {
                return -1;
            }
            chemistry += 1LL * skill[i] * skill[n - i - 1];
        }

        return chemistry;
    }
};
