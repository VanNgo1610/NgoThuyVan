package com.example.bjwatest.controller;

import com.example.bjwatest.service.EmployeeService;
import org.springframework.stereotype.Controller;
import org.springframework.ui.Model;
import org.springframework.web.bind.annotation.*;

@Controller
@RequestMapping("/employees")
public class EmployeeController {

    private final EmployeeService service;

    public EmployeeController(EmployeeService service) {
        this.service = service;
    }

    @GetMapping
    public String listEmployees(Model model) {
        model.addAttribute("employees", service.findAllEmployees());
        return "redirect:/employee"; // thymeleaf template
    }

    @PostMapping
    public String addEmployee(@RequestParam String name, @RequestParam Double wage) {
        service.addEmployee(name, wage);
        return "redirect:/employee";
    }
}