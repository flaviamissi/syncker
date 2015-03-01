#include <iostream>
#include <map>
#include <vector>

typedef std::vector<std::string> Message;
typedef std::map<std::string, Message > NormalizedData;
typedef std::map<std::string, std::string> NormalizedResult;

class SynckerCLI {
    public:
        void show_result(NormalizedResult result);
        NormalizedData normalize(char *argv[], int argc);
};

void SynckerCLI::show_result(NormalizedResult result) {
    std::cout << "This is supposed to be a result" << std::endl;
}

NormalizedData SynckerCLI::normalize(char *argv[], int argc) {
    Message args (argc - 2);
    NormalizedData data;

    for (int i = argc - 1; i >= 2 && args.size() > 0; i--) { // discards first two elements (binary and command name)
        args.insert(args.begin(), argv[i]);
    }

    std::string action = argv[1];
    data[action] = args;

    return data;
}
