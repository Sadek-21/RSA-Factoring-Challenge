# RSA Factoring Challenge

## Introduction
This project is an RSA factoring challenge aimed at developing a program to factorize large numbers into a product of two smaller prime numbers. The task is to find these prime factors as quickly as possible.

## Background
RSA (Rivest-Shamir-Adleman) is a widely used encryption algorithm that relies on the difficulty of factoring large composite numbers into their prime factors. In this project, we have intercepted numbers used for encryption on an unsecured network and aim to factorize them before the encryption becomes compromised.

## Resources
Before proceeding with the project, it's recommended to familiarize yourself with the following concepts:
- RSA encryption
- HTTPS security mechanisms
- Prime factorization algorithms

## Requirements
### General
- You can choose any programming language.
- The operating system needs to be Standard Ubuntu 20.04 LTS.
- The program should run without any dependencies and will be executed on a machine where no additional installations are possible.
- The time limit for the program execution is 5 seconds.

## Tasks
### Task 0: Factorize all the things!
- Develop a program that factors natural numbers into a product of two smaller numbers.
- Input: A file containing natural numbers, one per line.
- Output: Factorization of each number in the format n=p*q.
- Factors p and q do not have to be prime numbers.
- Example: `4=2*2`, `12=6*2`

### Task 1: RSA Factoring Challenge
- Implement a modified version of Task 0.
- Ensure that factors p and q are always prime numbers.
- Input: A file containing a single natural number.
- Output: Factorization of the number in the format n=p*q.
- Example: `6=3*2`, `77=11*7`

## Repository
- **GitHub repository:** [RSA-Factoring-Challenge](https://github.com/Sadek-21/RSA-Factoring-Challenge)
- **Files:** `factors`, `rsa`

## Usage
To use the provided programs, follow the instructions in the repository README. Each task has its corresponding executable file (`factors` for Task 0 and `rsa` for Task 1) along with sample test files for demonstration.

