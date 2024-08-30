package main

import (
    "fmt"
    "os/exec"
    "log"
)

func main() {
    // Perintah shutdown
    cmd := exec.Command("sudo", "shutdown", "-h", "now")

    // Menjalankan perintah
    err := cmd.Run()
    if err != nil {
        log.Fatalf("Error executing shutdown command: %v", err)
    }

    fmt.Println("Shutdown command executed successfully")
}

