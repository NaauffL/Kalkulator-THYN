<?php

class Calculator {
  protected $angka1, $angka2, $operator, $hasil;
  
  public function setAngka($angka1, $angka2) {
      $this->angka1 = $angka1;
      $this->angka2 = $angka2;
      }
      
  public function setOperator($operator) {
      $this->operator = $operator;
      }
      
  public function getHasil() {
      return $this->output;
      }
  public int pertambahan(){
    return $angka1 + $angka2;
  }
 }

?>
