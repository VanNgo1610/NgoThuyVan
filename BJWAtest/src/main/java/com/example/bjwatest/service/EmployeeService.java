package com.example.bjwatest.service;

import com.example.bjwatest.entities.Employee;
import com.example.bjwatest.repository.EmployeeRepository;
import org.springframework.stereotype.Service;

import java.util.List;

@Service
public class EmployeeService {

    private final EmployeeRepository repository;

    public EmployeeService(EmployeeRepository repository) {
        this.repository = repository;
    }

    public Employee addEmployee(String name, Double wage) {
        Employee emp = new Employee(name, wage);
        return repository.save(emp);
    }

    public List<Employee> findAllEmployees() {
        return repository.findAll();
    }
}
