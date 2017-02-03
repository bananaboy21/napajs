#pragma once


namespace napa {
namespace scheduler {

    /// <summary> Represents an execution logic that can be scheduled using the Napa scheduler. </summary>
    class Task {
    public:

        /// <summary> Executes the task. </summary>
        virtual void Execute() = 0;

        /// <summary> Virtual destructor. </summary>
        virtual ~Task() = default;
    };

}
}