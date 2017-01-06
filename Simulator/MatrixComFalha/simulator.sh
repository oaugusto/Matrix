#!/bin/sh

tmux start-server
tmux new-session -d -s Haystack -n simulate
tmux new-window -tHaystack:1 -n sim1
tmux new-window -tHaystack:2 -n sim2
tmux new-window -tHaystack:3 -n sim3
tmux new-window -tHaystack:4 -n sim4
tmux new-window -tHaystack:5 -n sim5
tmux new-window -tHaystack:6 -n sim6
tmux new-window -tHaystack:7 -n sim7
tmux new-window -tHaystack:8 -n sim8
tmux new-window -tHaystack:9 -n sim9

tmux send-keys -tHaystack:0 'htop' C-m
tmux send-keys -tHaystack:1 'cd ./1-5-15-tst;python main.py' C-m
tmux send-keys -tHaystack:2 'cd ./1-15-25-tst;python main.py' C-m
tmux send-keys -tHaystack:3 'cd ./1-35-45-tst;python main.py' C-m
tmux send-keys -tHaystack:4 'cd ./5-5-15-tst;python main.py' C-m
tmux send-keys -tHaystack:5 'cd ./5-15-25-tst;python main.py' C-m
tmux send-keys -tHaystack:6 'cd ./5-35-45-tst;python main.py' C-m
tmux send-keys -tHaystack:7 'cd ./10-5-15-tst;python main.py' C-m
tmux send-keys -tHaystack:8 'cd ./10-15-25-tst;python main.py' C-m
tmux send-keys -tHaystack:9 'cd ./10-35-45-tst;python main.py' C-m

tmux select-window -tHaystack:0
tmux attach-session -d -tHaystack
