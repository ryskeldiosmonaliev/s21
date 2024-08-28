#include "s21_test.h"

START_TEST(sub_test_1) {
  int num1 = -10;
  int num2 = -10;
  int dif_int = 0;
  s21_decimal a = {0};
  s21_decimal b = {0};
  s21_from_int_to_decimal(num1, &a);
  s21_from_int_to_decimal(num2, &b);
  s21_decimal res_dec = {0};
  int res_int = 0;
  s21_sub(a, b, &res_dec);
  s21_from_decimal_to_int(res_dec, &res_int);
  ck_assert_int_eq(res_int, dif_int);
}
END_TEST

START_TEST(sub_test_2) {
  int num1 = 10;
  int num2 = 20;
  int dif_int = -10;
  s21_decimal a = {0};
  s21_decimal b = {0};
  s21_from_int_to_decimal(num1, &a);
  s21_from_int_to_decimal(num2, &b);
  s21_decimal res_dec = {0};
  int res_int = 0;
  s21_sub(a, b, &res_dec);
  s21_from_decimal_to_int(res_dec, &res_int);
  ck_assert_int_eq(res_int, dif_int);
}
END_TEST

START_TEST(sub_test_3) {
  int num1 = -10;
  int num2 = 20;
  int dif_int = -30;
  s21_decimal a = {0};
  s21_decimal b = {0};
  s21_from_int_to_decimal(num1, &a);
  s21_from_int_to_decimal(num2, &b);
  s21_decimal res_dec = {0};
  int res_int = 0;
  s21_sub(a, b, &res_dec);
  s21_from_decimal_to_int(res_dec, &res_int);
  ck_assert_int_eq(res_int, dif_int);
}
END_TEST

START_TEST(sub_test_4) {
  int num1 = 9403;
  int num2 = 202;
  int dif_int = 9201;
  s21_decimal a = {0};
  s21_decimal b = {0};
  s21_from_int_to_decimal(num1, &a);
  s21_from_int_to_decimal(num2, &b);
  s21_decimal res_dec = {0};
  int res_int = 0;
  s21_sub(a, b, &res_dec);
  s21_from_decimal_to_int(res_dec, &res_int);
  ck_assert_int_eq(res_int, dif_int);
}
END_TEST

START_TEST(sub_test_5) {
  int num1 = 100;
  int num2 = -200;
  int dif_int = 300;
  s21_decimal a = {0};
  s21_decimal b = {0};
  s21_from_int_to_decimal(num1, &a);
  s21_from_int_to_decimal(num2, &b);
  s21_decimal res_dec = {0};
  int res_int = 0;
  s21_sub(a, b, &res_dec);
  s21_from_decimal_to_int(res_dec, &res_int);
  ck_assert_int_eq(res_int, dif_int);
}
END_TEST

START_TEST(sub_test_6) {
  int num1 = 100;
  int num2 = -10;
  int dif_int = 110;
  s21_decimal a = {0};
  s21_decimal b = {0};
  s21_from_int_to_decimal(num1, &a);
  s21_from_int_to_decimal(num2, &b);
  s21_decimal res_dec = {0};
  int res_int = 0;
  s21_sub(a, b, &res_dec);
  s21_from_decimal_to_int(res_dec, &res_int);
  ck_assert_int_eq(res_int, dif_int);
}
END_TEST

START_TEST(sub_test_7) {
  int num1 = -900;
  int num2 = -100;
  int dif_int = -800;
  s21_decimal a = {0};
  s21_decimal b = {0};
  s21_from_int_to_decimal(num1, &a);
  s21_from_int_to_decimal(num2, &b);
  s21_decimal res_dec = {0};
  int res_int = 0;
  s21_sub(a, b, &res_dec);
  s21_from_decimal_to_int(res_dec, &res_int);
  ck_assert_int_eq(res_int, dif_int);
}
END_TEST

START_TEST(sub_test_8) {
  int num1 = 900;
  int num2 = 100;
  int dif_int = 800;
  s21_decimal a = {0};
  s21_decimal b = {0};
  s21_from_int_to_decimal(num1, &a);
  s21_from_int_to_decimal(num2, &b);
  s21_decimal res_dec = {0};
  int res_int = 0;
  s21_sub(a, b, &res_dec);
  s21_from_decimal_to_int(res_dec, &res_int);
  ck_assert_int_eq(res_int, dif_int);
}
END_TEST

START_TEST(sub_test_9) {
  int num1 = 900;
  int num2 = -100;
  int dif_int = 1000;
  s21_decimal a = {0};
  s21_decimal b = {0};
  s21_from_int_to_decimal(num1, &a);
  s21_from_int_to_decimal(num2, &b);
  s21_decimal res_dec = {0};
  int res_int = 0;
  s21_sub(a, b, &res_dec);
  s21_from_decimal_to_int(res_dec, &res_int);
  ck_assert_int_eq(res_int, dif_int);
}
END_TEST

START_TEST(sub_test_10) {
  int num1 = -900;
  int num2 = 100;
  int dif_int = -1000;
  s21_decimal a = {0};
  s21_decimal b = {0};
  s21_from_int_to_decimal(num1, &a);
  s21_from_int_to_decimal(num2, &b);
  s21_decimal res_dec = {0};
  int res_int = 0;
  s21_sub(a, b, &res_dec);
  s21_from_decimal_to_int(res_dec, &res_int);
  ck_assert_int_eq(res_int, dif_int);
}
END_TEST

START_TEST(sub_test_11) {
  int num1 = 123;
  float num2 = 12.5;
  float origin_float = 110.5;
  s21_decimal a = {0};
  s21_decimal b = {0};
  s21_from_int_to_decimal(num1, &a);
  s21_from_float_to_decimal(num2, &b);
  s21_decimal res_dec = {0};
  float res_float = 0.0;
  s21_sub(a, b, &res_dec);
  s21_from_decimal_to_float(res_dec, &res_float);
  ck_assert_float_eq(res_float, origin_float);
}
END_TEST

START_TEST(sub_test_12) {
  int num1 = -123;
  float num2 = 12.5;
  float dif_float = num1 - num2;
  s21_decimal a = {0};
  s21_decimal b = {0};
  s21_from_int_to_decimal(num1, &a);
  s21_from_float_to_decimal(num2, &b);
  s21_decimal res_dec = {0};
  float res_float = 0.0;
  s21_sub(a, b, &res_dec);
  s21_from_decimal_to_float(res_dec, &res_float);
  ck_assert_float_eq(res_float, dif_float);
}
END_TEST

START_TEST(sub_test_13) {
  float num1 = 12.9;
  float num2 = 12.5;
  s21_decimal a = {0};
  s21_decimal b = {0};
  s21_from_float_to_decimal(num1, &a);
  s21_from_float_to_decimal(num2, &b);
  s21_decimal res_dec = {0};
  float our_res = 0.0;
  s21_sub(a, b, &res_dec);
  s21_from_decimal_to_float(res_dec, &our_res);
}
END_TEST

START_TEST(sub_test_14) {
  int num1 = 9403;
  float num2 = 202.098;
  float dif_float = 9200.902;
  s21_decimal a = {0};
  s21_decimal b = {0};
  s21_from_int_to_decimal(num1, &a);
  s21_from_float_to_decimal(num2, &b);
  s21_decimal res_dec = {0};
  float res_float = 0.0;
  s21_sub(a, b, &res_dec);
  s21_from_decimal_to_float(res_dec, &res_float);
  ck_assert_float_eq(res_float, dif_float);
}
END_TEST

START_TEST(sub_test_15) {
  int num1 = -9403;
  float num2 = 202.098;
  float dif_float = num1 - num2;
  s21_decimal a = {0};
  s21_decimal b = {0};
  s21_from_int_to_decimal(num1, &a);
  s21_from_float_to_decimal(num2, &b);
  s21_decimal res_dec = {0};
  float res_float = 0.0;
  s21_sub(a, b, &res_dec);
  s21_from_decimal_to_float(res_dec, &res_float);
  ck_assert_float_eq(res_float, dif_float);
}
END_TEST

START_TEST(sub_test_16) {
  float num1 = 9403.0;
  float num2 = 202.09e8;
  float dif_float = num1 - num2;
  s21_decimal a = {0};
  s21_decimal b = {0};
  s21_from_float_to_decimal(num1, &a);
  s21_from_float_to_decimal(num2, &b);
  s21_decimal res_dec = {0};
  float res_float = 0.0;
  s21_sub(a, b, &res_dec);
  s21_from_decimal_to_float(res_dec, &res_float);
  ck_assert_float_eq(res_float, dif_float);
}
END_TEST

START_TEST(sub_test_17) {
  float num1 = 9403.0e2;
  float num2 = 202.09e8;
  float dif_float = num1 - num2;
  s21_decimal a = {0};
  s21_decimal b = {0};
  s21_from_float_to_decimal(num1, &a);
  s21_from_float_to_decimal(num2, &b);
  s21_decimal res_dec = {0};
  float res_float = 0.0;
  s21_sub(a, b, &res_dec);
  s21_from_decimal_to_float(res_dec, &res_float);
  ck_assert_float_eq(res_float, dif_float);
}
END_TEST

START_TEST(sub_test_18) {
  float num1 = -9403.0e2;
  int num2 = -202;
  float dif_float = num1 - num2;
  s21_decimal a = {0};
  s21_decimal b = {0};
  s21_from_float_to_decimal(num1, &a);
  s21_from_int_to_decimal(num2, &b);
  s21_decimal res_dec = {0};
  float res_float = 0.0;
  s21_sub(a, b, &res_dec);
  s21_from_decimal_to_float(res_dec, &res_float);
  ck_assert_float_eq(res_float, dif_float);
}
END_TEST

START_TEST(sub_test_19) {
  float num1 = -94;
  float num2 = -202;
  float dif_float = num1 - num2;
  s21_decimal a = {0};
  s21_decimal b = {0};
  s21_from_float_to_decimal(num1, &a);
  s21_from_int_to_decimal(num2, &b);
  s21_decimal res_dec = {0};
  float res_float = 0.0;
  s21_sub(a, b, &res_dec);
  s21_from_decimal_to_float(res_dec, &res_float);
  ck_assert_float_eq(res_float, dif_float);
}
END_TEST

START_TEST(sub_test_20) {
  float num1 = -1.0 / 0.0;
  int num2 = 202;
  double dif_float = 0 - num2;
  s21_decimal a = {0};
  s21_decimal b = {0};
  s21_from_float_to_decimal(num1, &a);
  s21_from_int_to_decimal(num2, &b);
  s21_decimal res_dec = {0};
  float res_float = 0.0;
  s21_sub(a, b, &res_dec);
  s21_from_decimal_to_float(res_dec, &res_float);
  ck_assert_float_eq(res_float, dif_float);
}
END_TEST

START_TEST(sub_test_21) {
  float num1 = 1.0 / 0.0;
  int num2 = 20;
  double dif_float = 0 - num2;
  s21_decimal a = {0};
  s21_decimal b = {0};
  s21_from_float_to_decimal(num1, &a);
  s21_from_int_to_decimal(num2, &b);
  s21_decimal res_dec = {0};
  float res_float = 0.0;
  s21_sub(a, b, &res_dec);
  s21_from_decimal_to_float(res_dec, &res_float);
  ck_assert_float_eq(res_float, dif_float);
}
END_TEST

START_TEST(s21_sub_int_22) {
  s21_decimal dec1;
  s21_decimal dec2;
  int tmp1 = 100;
  int tmp2 = 99999;
  int res_s21 = 0;
  int res = -99899;
  s21_decimal res1;
  s21_from_int_to_decimal(tmp1, &dec1);
  s21_from_int_to_decimal(tmp2, &dec2);
  s21_sub(dec1, dec2, &res1);
  s21_from_decimal_to_int(res1, &res_s21);
  ck_assert_int_eq(res_s21, res);
}
END_TEST

START_TEST(s21_sub_int_23) {
  s21_decimal dec1;
  s21_decimal dec2;
  int tmp1 = -100;
  int tmp2 = -99999;
  int res_s21 = 0;
  int res = 99899;
  s21_decimal res1;
  s21_from_int_to_decimal(tmp1, &dec1);
  s21_from_int_to_decimal(tmp2, &dec2);
  s21_sub(dec1, dec2, &res1);
  s21_from_decimal_to_int(res1, &res_s21);
  ck_assert_int_eq(res_s21, res);
}
END_TEST

START_TEST(s21_sub_int_24) {
  s21_decimal dec1;
  s21_decimal dec2;
  int tmp1 = -2147483647;
  int tmp2 = -2147483647;
  int res_s21 = 0;
  int res = 0;
  s21_from_int_to_decimal(tmp1, &dec1);
  s21_from_int_to_decimal(tmp2, &dec2);
  s21_decimal res1;
  s21_sub(dec1, dec2, &res1);
  s21_from_decimal_to_int(res1, &res_s21);
  ck_assert_int_eq(res_s21, res);
}
END_TEST

START_TEST(s21_sub_int_25) {
  s21_decimal dec1;
  s21_decimal dec2;
  int tmp1 = -214748347;
  int tmp2 = 217483647;
  int res_s21 = 0;
  int res = -214748347 - 217483647;
  s21_from_int_to_decimal(tmp1, &dec1);
  s21_from_int_to_decimal(tmp2, &dec2);
  s21_decimal res1;
  s21_sub(dec1, dec2, &res1);
  s21_from_decimal_to_int(res1, &res_s21);
  ck_assert_int_eq(res_s21, res);
}
END_TEST

START_TEST(s21_sub_int_26) {
  s21_decimal dec1;
  s21_decimal dec2;
  int tmp1 = 214748347;
  int tmp2 = -217483647;
  int res_s21 = 0;
  int res = 214748347 - -217483647;
  s21_from_int_to_decimal(tmp1, &dec1);
  s21_from_int_to_decimal(tmp2, &dec2);
  s21_decimal res1;
  s21_sub(dec1, dec2, &res1);
  s21_from_decimal_to_int(res1, &res_s21);
  ck_assert_int_eq(res_s21, res);
}
END_TEST

// START_TEST(s21_sub_max_27) {
//   s21_decimal src1 = {0};
//   src1.bits[0] = 0b11111111111111111111111111111111;
//   src1.bits[1] = 0b11111111111111111111111111111111;
//   src1.bits[2] = 0b11111111111111111111111111111111;
//   src1.bits[3] = 0b00000000000000000000000000000000;
//   s21_decimal src2 = {0};
//   src2.bits[0] = 0b00000000000000000000000000000101;
//   src2.bits[1] = 0b00000000000000000000000000000000;
//   src2.bits[2] = 0b00000000000000000000000000000000;
//   src2.bits[3] = 0b00000000000000010000000000000000;
//   s21_decimal original_res = {0};
//   original_res.bits[0] = 0b11111111111111111111111111111110;
//   original_res.bits[1] = 0b11111111111111111111111111111111;
//   original_res.bits[2] = 0b11111111111111111111111111111111;
//   original_res.bits[3] = 0b00000000000000000000000000000000;
//   s21_decimal s21_res = {0};
//   s21_sub(src1, src2, &s21_res);
//   ck_assert_int_eq(s21_sub(src1, src2, &s21_res), 0);
//   ck_assert_int_eq(original_res.bits[0], s21_res.bits[0]);
//   ck_assert_int_eq(original_res.bits[1], s21_res.bits[1]);
//   ck_assert_int_eq(original_res.bits[2], s21_res.bits[2]);
//   ck_assert_int_eq(original_res.bits[3], s21_res.bits[3]);
// }
// END_TEST

// START_TEST(s21_sub_max_28) {
//   s21_decimal src1;
//   src1.bits[0] = 0b11111111111111111111111111111111;
//   src1.bits[1] = 0b11111111111111111111111111111111;
//   src1.bits[2] = 0b11111111111111111111111111111111;
//   src1.bits[3] = 0b00000000000000000000000000000000;
//   s21_decimal src2;
//   src2.bits[0] = 0b00000000000000000000000000000001;
//   src2.bits[1] = 0b00000000000000000000000000000000;
//   src2.bits[2] = 0b00000000000000000000000000000000;
//   src2.bits[3] = 0b00000000000000000000000000000000;
//   s21_decimal original_res;
//   original_res.bits[0] = 0b11111111111111111111111111111110;
//   original_res.bits[1] = 0b11111111111111111111111111111111;
//   original_res.bits[2] = 0b11111111111111111111111111111111;
//   original_res.bits[3] = 0b00000000000000000000000000000000;
//   s21_decimal s21_res;
//   s21_sub(src1, src2, &s21_res);
//   ck_assert_int_eq(s21_sub(src1, src2, &s21_res), 0);
//   ck_assert_int_eq(original_res.bits[0], s21_res.bits[0]);
//   ck_assert_int_eq(original_res.bits[1], s21_res.bits[1]);
//   ck_assert_int_eq(original_res.bits[2], s21_res.bits[2]);
//   ck_assert_int_eq(original_res.bits[3], s21_res.bits[3]);
// }
// END_TEST

// START_TEST(s21_subTest1) {
//   s21_decimal src1, src2, origin;

//   src1.bits[0] = 0b00000000000000000000000000000010;
//   src1.bits[1] = 0b00000000000000000000000000000000;
//   src1.bits[2] = 0b00000000000000000000000000000000;
//   src1.bits[3] = 0b00000000000000000000000000000000;

//   src2.bits[0] = 0b00000000000000000000000000000011;
//   src2.bits[1] = 0b00000000000000000000000000000000;
//   src2.bits[2] = 0b00000000000000000000000000000000;
//   src2.bits[3] = 0b00000000000000000000000000000000;
//   s21_decimal result = {{0, 0, 0, 0}};
//   s21_sub(src1, src2, &result);

//   origin.bits[0] = 0b00000000000000000000000000000001;
//   origin.bits[1] = 0b00000000000000000000000000000000;
//   origin.bits[2] = 0b00000000000000000000000000000000;
//   origin.bits[3] = 0b10000000000000000000000000000000;
//   ck_assert_int_eq(origin.bits[3], result.bits[3]);
//   ck_assert_int_eq(origin.bits[2], result.bits[2]);
//   ck_assert_int_eq(origin.bits[1], result.bits[1]);
//   ck_assert_int_eq(origin.bits[0], result.bits[0]);
// }
// END_TEST

// START_TEST(s21_subTest2) {
//   s21_decimal src1, src2, origin;

//   src1.bits[0] = 0b00000000000000000000000000000011;
//   src1.bits[1] = 0b00000000000000000000000000000000;
//   src1.bits[2] = 0b00000000000000000000000000000000;
//   src1.bits[3] = 0b00000000000000000000000000000000;

//   src2.bits[0] = 0b00000000000000000000000000000010;
//   src2.bits[1] = 0b00000000000000000000000000000000;
//   src2.bits[2] = 0b00000000000000000000000000000000;
//   src2.bits[3] = 0b00000000000000000000000000000000;
//   s21_decimal result = {{0, 0, 0, 0}};
//   s21_sub(src1, src2, &result);

//   origin.bits[0] = 0b00000000000000000000000000000001;
//   origin.bits[1] = 0b00000000000000000000000000000000;
//   origin.bits[2] = 0b00000000000000000000000000000000;
//   origin.bits[3] = 0b00000000000000000000000000000000;
//   ck_assert_int_eq(origin.bits[3], result.bits[3]);
//   ck_assert_int_eq(origin.bits[2], result.bits[2]);
//   ck_assert_int_eq(origin.bits[1], result.bits[1]);
//   ck_assert_int_eq(origin.bits[0], result.bits[0]);
// }
// END_TEST

// START_TEST(s21_subTest3) {
//   s21_decimal src1, src2, origin;

//   src1.bits[0] = 0b00000000000000000000000000000000;
//   src1.bits[1] = 0b00000000000000000000000000000000;
//   src1.bits[2] = 0b00000000000000000000000000000000;
//   src1.bits[3] = 0b00000000000000000000000000000000;

//   src2.bits[0] = 0b00000000000000000000000000000011;
//   src2.bits[1] = 0b00000000000000000000000000000000;
//   src2.bits[2] = 0b00000000000000000000000000000000;
//   src2.bits[3] = 0b00000000000000000000000000000000;
//   s21_decimal result = {{0, 0, 0, 0}};
//   s21_sub(src1, src2, &result);

//   origin.bits[0] = 0b00000000000000000000000000000011;
//   origin.bits[1] = 0b00000000000000000000000000000000;
//   origin.bits[2] = 0b00000000000000000000000000000000;
//   origin.bits[3] = 0b10000000000000000000000000000000;
//   ck_assert_int_eq(origin.bits[3], result.bits[3]);
//   ck_assert_int_eq(origin.bits[2], result.bits[2]);
//   ck_assert_int_eq(origin.bits[1], result.bits[1]);
//   ck_assert_int_eq(origin.bits[0], result.bits[0]);
// }
// END_TEST

// START_TEST(s21_subTest4) {
//   s21_decimal src1, src2, origin;

//   src1.bits[0] = 0b00000000000000000000000000000010;
//   src1.bits[1] = 0b00000000000000000000000000000000;
//   src1.bits[2] = 0b00000000000000000000000000000000;
//   src1.bits[3] = 0b00000000000000000000000000000000;

//   src2.bits[0] = 0b00000000000000000000000000000000;
//   src2.bits[1] = 0b00000000000000000000000000000000;
//   src2.bits[2] = 0b00000000000000000000000000000000;
//   src2.bits[3] = 0b00000000000000000000000000000000;
//   s21_decimal result = {{0, 0, 0, 0}};
//   s21_sub(src1, src2, &result);

//   origin.bits[0] = 0b00000000000000000000000000000010;
//   origin.bits[1] = 0b00000000000000000000000000000000;
//   origin.bits[2] = 0b00000000000000000000000000000000;
//   origin.bits[3] = 0b00000000000000000000000000000000;
//   ck_assert_int_eq(origin.bits[3], result.bits[3]);
//   ck_assert_int_eq(origin.bits[2], result.bits[2]);
//   ck_assert_int_eq(origin.bits[1], result.bits[1]);
//   ck_assert_int_eq(origin.bits[0], result.bits[0]);
// }
// END_TEST

// START_TEST(s21_subTest5) {
//   s21_decimal src1, src2, origin;

//   src1.bits[0] = 0b00000000000000000000000000000000;
//   src1.bits[1] = 0b00000000000000000000000000000000;
//   src1.bits[2] = 0b00000000000000000000000000000000;
//   src1.bits[3] = 0b00000000000000000000000000000000;

//   src2.bits[0] = 0b00000000000000000000000000000011;
//   src2.bits[1] = 0b00000000000000000000000000000000;
//   src2.bits[2] = 0b00000000000000000000000000000000;
//   src2.bits[3] = 0b00000000000000000000000000000000;
//   s21_decimal result = {{0, 0, 0, 0}};
//   s21_sub(src1, src2, &result);

//   origin.bits[0] = 0b00000000000000000000000000000011;
//   origin.bits[1] = 0b00000000000000000000000000000000;
//   origin.bits[2] = 0b00000000000000000000000000000000;
//   origin.bits[3] = 0b10000000000000000000000000000000;
//   ck_assert_int_eq(origin.bits[3], result.bits[3]);
//   ck_assert_int_eq(origin.bits[2], result.bits[2]);
//   ck_assert_int_eq(origin.bits[1], result.bits[1]);
//   ck_assert_int_eq(origin.bits[0], result.bits[0]);
// }
// END_TEST

// START_TEST(s21_subTest6) {
//   s21_decimal src1, src2, origin;

//   src1.bits[0] = 0b00000000000000000000000000000010;
//   src1.bits[1] = 0b00000000000000000000000000000000;
//   src1.bits[2] = 0b00000000000000000000000000000000;
//   src1.bits[3] = 0b00000000000000000000000000000000;

//   src2.bits[0] = 0b00000000000000000000000000000000;
//   src2.bits[1] = 0b00000000000000000000000000000000;
//   src2.bits[2] = 0b00000000000000000000000000000000;
//   src2.bits[3] = 0b00000000000000000000000000000000;
//   s21_decimal result = {{0, 0, 0, 0}};
//   s21_sub(src1, src2, &result);

//   origin.bits[0] = 0b00000000000000000000000000000010;
//   origin.bits[1] = 0b00000000000000000000000000000000;
//   origin.bits[2] = 0b00000000000000000000000000000000;
//   origin.bits[3] = 0b00000000000000000000000000000000;
//   ck_assert_int_eq(origin.bits[3], result.bits[3]);
//   ck_assert_int_eq(origin.bits[2], result.bits[2]);
//   ck_assert_int_eq(origin.bits[1], result.bits[1]);
//   ck_assert_int_eq(origin.bits[0], result.bits[0]);
// }
// END_TEST

// START_TEST(s21_subTest7) {
//   s21_decimal src1, src2, origin;

//   src1.bits[0] = 0b00000000000000000001100101111001;
//   src1.bits[1] = 0b00000000000000000000000000000000;
//   src1.bits[2] = 0b00000000000000000000000000000000;
//   src1.bits[3] = 0b00000000000000000000000000000000;

//   src2.bits[0] = 0b00000000000000010010000110001001;
//   src2.bits[1] = 0b00000000000000000000000000000000;
//   src2.bits[2] = 0b00000000000000000000000000000000;
//   src2.bits[3] = 0b00000000000000000000000000000000;
//   s21_decimal result = {{0, 0, 0, 0}};
//   s21_sub(src1, src2, &result);

//   origin.bits[0] = 0b00000000000000010000100000010000;
//   origin.bits[1] = 0b00000000000000000000000000000000;
//   origin.bits[2] = 0b00000000000000000000000000000000;
//   origin.bits[3] = 0b10000000000000000000000000000000;
//   ck_assert_int_eq(origin.bits[3], result.bits[3]);
//   ck_assert_int_eq(origin.bits[2], result.bits[2]);
//   ck_assert_int_eq(origin.bits[1], result.bits[1]);
//   ck_assert_int_eq(origin.bits[0], result.bits[0]);
// }
// END_TEST

// START_TEST(s21_subTest8) {
//   s21_decimal src1, src2, origin;

//   src1.bits[0] = 0b00000000000000000000000000000100;
//   src1.bits[1] = 0b00000000000000000000000000000000;
//   src1.bits[2] = 0b00000000000000000000000000000000;
//   src1.bits[3] = 0b00000000000000000000000000000000;

//   src2.bits[0] = 0b00000101110100011001110100011011;
//   src2.bits[1] = 0b00000000000000000000000000000000;
//   src2.bits[2] = 0b00000000000000000000000000000000;
//   src2.bits[3] = 0b00000000000000000000000000000000;
//   s21_decimal result = {{0, 0, 0, 0}};
//   s21_sub(src1, src2, &result);

//   origin.bits[0] = 0b00000101110100011001110100010111;
//   origin.bits[1] = 0b00000000000000000000000000000000;
//   origin.bits[2] = 0b00000000000000000000000000000000;
//   origin.bits[3] = 0b10000000000000000000000000000000;
//   ck_assert_int_eq(origin.bits[3], result.bits[3]);
//   ck_assert_int_eq(origin.bits[2], result.bits[2]);
//   ck_assert_int_eq(origin.bits[1], result.bits[1]);
//   ck_assert_int_eq(origin.bits[0], result.bits[0]);
// }
// END_TEST

// START_TEST(s21_subTest9) {
//   s21_decimal src1, src2, origin;

//   src1.bits[0] = 100;
//   src1.bits[1] = 0b00000000000000000000000000000000;
//   src1.bits[2] = 0b00000000000000000000000000000000;
//   src1.bits[3] = 0b00000000000000000000000000000000;

//   src2.bits[0] = 95;
//   src2.bits[1] = 0b00000000000000000000000000000000;
//   src2.bits[2] = 0b00000000000000000000000000000000;
//   src2.bits[3] = 0b00000000000000000000000000000000;
//   s21_decimal result = {{0, 0, 0, 0}};
//   s21_sub(src1, src2, &result);

//   origin.bits[0] = 5;
//   origin.bits[1] = 0b00000000000000000000000000000000;
//   origin.bits[2] = 0b00000000000000000000000000000000;
//   origin.bits[3] = 0b00000000000000000000000000000000;
//   ck_assert_int_eq(origin.bits[3], result.bits[3]);
//   ck_assert_int_eq(origin.bits[2], result.bits[2]);
//   ck_assert_int_eq(origin.bits[1], result.bits[1]);
//   ck_assert_int_eq(origin.bits[0], result.bits[0]);
// }
// END_TEST

// START_TEST(s21_subTest10) {
//   s21_decimal src1, src2, origin;

//   src1.bits[0] = 0b00000000000001011001000011001100;
//   src1.bits[1] = 0b00000000000000000000000000000000;
//   src1.bits[2] = 0b00000000000000000000000000000000;
//   src1.bits[3] = 0b10000000000000000000000000000000;

//   src2.bits[0] = 0b00000000000000000000000000000001;
//   src2.bits[1] = 0b00000000000000000000000000000000;
//   src2.bits[2] = 0b00000000000000000000000000000000;
//   src2.bits[3] = 0b00000000000000000000000000000000;
//   s21_decimal result = {{0, 0, 0, 0}};
//   s21_sub(src1, src2, &result);

//   origin.bits[0] = 0b00000000000001011001000011001101;
//   origin.bits[1] = 0b00000000000000000000000000000000;
//   origin.bits[2] = 0b00000000000000000000000000000000;
//   origin.bits[3] = 0b10000000000000000000000000000000;
//   ck_assert_int_eq(origin.bits[3], result.bits[3]);
//   ck_assert_int_eq(origin.bits[2], result.bits[2]);
//   ck_assert_int_eq(origin.bits[1], result.bits[1]);
//   ck_assert_int_eq(origin.bits[0], result.bits[0]);
// }
// END_TEST

// START_TEST(s21_subTest11) {
//   s21_decimal src1, src2, origin;

//   src1.bits[0] = 0b00000000000000000000000000000001;
//   src1.bits[1] = 0b00000000000000000000000000000000;
//   src1.bits[2] = 0b00000000000000000000000000000000;
//   src1.bits[3] = 0b00000000000000000000000000000000;

//   src2.bits[0] = 0b11111101101100110001110000110001;
//   src2.bits[1] = 0b00000000000000000000000000010110;
//   src2.bits[2] = 0b00000000000000000000000000000000;
//   src2.bits[3] = 0b00000000000000000000000000000000;
//   s21_decimal result = {{0, 0, 0, 0}};
//   s21_sub(src1, src2, &result);

//   origin.bits[0] = 0b11111101101100110001110000110000;
//   origin.bits[1] = 0b00000000000000000000000000010110;
//   origin.bits[2] = 0b00000000000000000000000000000000;
//   origin.bits[3] = 0b10000000000000000000000000000000;
//   ck_assert_int_eq(origin.bits[3], result.bits[3]);
//   ck_assert_int_eq(origin.bits[2], result.bits[2]);
//   ck_assert_int_eq(origin.bits[1], result.bits[1]);
//   ck_assert_int_eq(origin.bits[0], result.bits[0]);
// }
// END_TEST

// START_TEST(s21_subTest12) {
//   s21_decimal src1, src2, origin;

//   src1.bits[0] = 0b01001100110100101000000111000101;
//   src1.bits[1] = 0b00000000000000000000000000000010;
//   src1.bits[2] = 0b00000000000000000000000000000000;
//   src1.bits[3] = 0b10000000000000000000000000000000;

//   src2.bits[0] = 0b00000000000000000000000000000011;
//   src2.bits[1] = 0b00000000000000000000000000000000;
//   src2.bits[2] = 0b00000000000000000000000000000000;
//   src2.bits[3] = 0b10000000000000000000000000000000;
//   s21_decimal result = {{0, 0, 0, 0}};
//   s21_sub(src1, src2, &result);

//   origin.bits[0] = 0b01001100110100101000000111000010;
//   origin.bits[1] = 0b00000000000000000000000000000010;
//   origin.bits[2] = 0b00000000000000000000000000000000;
//   origin.bits[3] = 0b10000000000000000000000000000000;
//   ck_assert_int_eq(origin.bits[3], result.bits[3]);
//   ck_assert_int_eq(origin.bits[2], result.bits[2]);
//   ck_assert_int_eq(origin.bits[1], result.bits[1]);
//   ck_assert_int_eq(origin.bits[0], result.bits[0]);
// }
// END_TEST

// START_TEST(s21_subTest13) {
//   s21_decimal src1, src2, origin;

//   src1.bits[0] = 0b10001001111001111111111111111111;
//   src1.bits[1] = 0b10001010110001110010001100000100;
//   src1.bits[2] = 0b00000000000000000000000000000000;
//   src1.bits[3] = 0b00000000000000000000000000000000;

//   src2.bits[0] = 0b00000000000000000000000000000001;
//   src2.bits[1] = 0b00000000000000000000000000000000;
//   src2.bits[2] = 0b00000000000000000000000000000000;
//   src2.bits[3] = 0b00000000000000000000000000000000;
//   s21_decimal result = {{0, 0, 0, 0}};
//   s21_sub(src1, src2, &result);

//   origin.bits[0] = 0b10001001111001111111111111111110;
//   origin.bits[1] = 0b10001010110001110010001100000100;
//   origin.bits[2] = 0b00000000000000000000000000000000;
//   origin.bits[3] = 0b00000000000000000000000000000000;
//   ck_assert_int_eq(origin.bits[3], result.bits[3]);
//   ck_assert_int_eq(origin.bits[2], result.bits[2]);
//   ck_assert_int_eq(origin.bits[1], result.bits[1]);
//   ck_assert_int_eq(origin.bits[0], result.bits[0]);
// }
// END_TEST

// START_TEST(s21_subTest14) {
//   s21_decimal src1, src2, origin;

//   src1.bits[0] = 0b11111111111111111111111111111111;
//   src1.bits[1] = 0b11111111111111111111111111111111;
//   src1.bits[2] = 0b00000000000000000000000000000000;
//   src1.bits[3] = 0b00000000000000000000000000000000;

//   src2.bits[0] = 0b00000000000000000000000000000001;
//   src2.bits[1] = 0b00000000000000000000000000000000;
//   src2.bits[2] = 0b00000000000000000000000000000000;
//   src2.bits[3] = 0b00000000000000000000000000000000;
//   s21_decimal result = {{0, 0, 0, 0}};
//   s21_sub(src1, src2, &result);

//   origin.bits[0] = 0b11111111111111111111111111111110;
//   origin.bits[1] = 0b11111111111111111111111111111111;
//   origin.bits[2] = 0b00000000000000000000000000000000;
//   origin.bits[3] = 0b00000000000000000000000000000000;
//   ck_assert_int_eq(origin.bits[3], result.bits[3]);
//   ck_assert_int_eq(origin.bits[2], result.bits[2]);
//   ck_assert_int_eq(origin.bits[1], result.bits[1]);
//   ck_assert_int_eq(origin.bits[0], result.bits[0]);
// }
// END_TEST

// START_TEST(s21_subTest15) {
//   s21_decimal src1, src2, origin;

//   src1.bits[0] = 0b11111111111111111111111111110110;
//   src1.bits[1] = 0b11111111111111111111111111111111;
//   src1.bits[2] = 0b00000000000000000000000000001001;
//   src1.bits[3] = 0b00000000000000010000000000000000;

//   src2.bits[0] = 0b00111001100010111010010101100010;
//   src2.bits[1] = 0b00000000000000000000000000000000;
//   src2.bits[2] = 0b00000000000000000000000000000000;
//   src2.bits[3] = 0b00000000000000000000000000000000;
//   s21_decimal result = {{0, 0, 0, 0}};
//   s21_sub(src1, src2, &result);

//   origin.bits[0] = 0b11000000100010111000101000100010;
//   origin.bits[1] = 0b11111111111111111111111111111101;
//   origin.bits[2] = 0b00000000000000000000000000001001;
//   origin.bits[3] = 0b00000000000000010000000000000000;
//   ck_assert_int_eq(origin.bits[3], result.bits[3]);
//   ck_assert_int_eq(origin.bits[2], result.bits[2]);
//   ck_assert_int_eq(origin.bits[1], result.bits[1]);
//   ck_assert_int_eq(origin.bits[0], result.bits[0]);
// }
// END_TEST

// START_TEST(s21_subTest16) {
//   s21_decimal src1, src2, origin;

//   src1.bits[0] = 0b10000010111000100101101011101101;
//   src1.bits[1] = 0b11111001111010000010010110101101;
//   src1.bits[2] = 0b10110000001111101111000010010100;
//   src1.bits[3] = 0b10000000000011100000000000000000;

//   src2.bits[0] = 0b00000011010000001001011100101110;
//   src2.bits[1] = 0b00000000000000000000000000000000;
//   src2.bits[2] = 0b00000000000000000000000000000000;
//   src2.bits[3] = 0b00000000000000000000000000000000;
//   s21_decimal result = {{0, 0, 0, 0}};
//   s21_sub(src1, src2, &result);

//   origin.bits[0] = 0b10010100100110011101101011101101;
//   origin.bits[1] = 0b11000101100100110110100101100010;
//   origin.bits[2] = 0b10110000001111101111000110111100;
//   origin.bits[3] = 0b10000000000011100000000000000000;
//   ck_assert_int_eq(origin.bits[3], result.bits[3]);
//   ck_assert_int_eq(origin.bits[2], result.bits[2]);
//   ck_assert_int_eq(origin.bits[1], result.bits[1]);
//   ck_assert_int_eq(origin.bits[0], result.bits[0]);
// }
// END_TEST

START_TEST(s21_subTest17) {
  s21_decimal src1 = {{-1, 0, -1, 0}};
  s21_decimal src2 = {{-1, -1, -1, 0}};

  s21_decimal result = {0};
  s21_sub(src1, src2, &result);
  s21_decimal origin = {{0, -1, 0, -2147483648}};

  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
}
END_TEST

// START_TEST(s21_subTest18) {
//   s21_decimal src1, src2, origin;

//   src1.bits[0] = 0b01001110111001000011100101110110;
//   src1.bits[1] = 0b01001011001101011010000111011001;
//   src1.bits[2] = 0b00011001101110010111010010111111;
//   src1.bits[3] = 0b00000000000011110000000000000000;

//   src2.bits[0] = 0b00000000000000000000000000000000;
//   src2.bits[1] = 0b00000000000000000000000000000000;
//   src2.bits[2] = 0b00000000000000000000000000000000;
//   src2.bits[3] = 0b00000000000000000000000000000000;
//   s21_decimal result = {{0, 0, 0, 0}};
//   s21_sub(src1, src2, &result);

//   origin.bits[0] = 0b01001110111001000011100101110110;
//   origin.bits[1] = 0b01001011001101011010000111011001;
//   origin.bits[2] = 0b00011001101110010111010010111111;
//   origin.bits[3] = 0b00000000000011110000000000000000;
//   ck_assert_int_eq(origin.bits[3], result.bits[3]);
//   ck_assert_int_eq(origin.bits[2], result.bits[2]);
//   ck_assert_int_eq(origin.bits[1], result.bits[1]);
//   ck_assert_int_eq(origin.bits[0], result.bits[0]);
// }
// END_TEST

// START_TEST(s21_subTest21) {
//   s21_decimal src1, src2;

//   src1.bits[0] = 0b10010001000010101111010011001010;
//   src1.bits[1] = 0b11000000010001011101010111110010;
//   src1.bits[2] = 0b00100111111001000001101100000000;
//   src1.bits[3] = 0b00000000000101010000000000000000;

//   src2.bits[0] = 0b00010001110011011101000110000101;
//   src2.bits[1] = 0b11110101101111000110111111000000;
//   src2.bits[2] = 0b00000010110101010000111100111111;
//   src2.bits[3] = 0b10000000000100000000000000000000;
//   s21_decimal result = {{0, 0, 0, 0}};
//   s21_sub(src1, src2, &result);
// }
// END_TEST

// START_TEST(s21_subTest22) {
//   s21_decimal src1, src2;

//   src1.bits[0] = 0b10010001000010101111010011001010;
//   src1.bits[1] = 0b11000000010001011101010111110010;
//   src1.bits[2] = 0b00100111111001000001101100000000;
//   src1.bits[3] = 0b10000000000101010000000000000000;

//   src2.bits[0] = 0b00010001110011011101000110000101;
//   src2.bits[1] = 0b11110101101111000110111111000000;
//   src2.bits[2] = 0b00000010110101010000111100111111;
//   src2.bits[3] = 0b10000000000100000000000000000000;
//   s21_decimal result = {{0, 0, 0, 0}};
//   s21_sub(src1, src2, &result);
// }
// END_TEST

// START_TEST(s21_subTest23) {
//   s21_decimal src1, src2, origin;

//   src1.bits[0] = 0b00000000000000000000000000000000;
//   src1.bits[1] = 0b00000000000000000000000000000000;
//   src1.bits[2] = 0b00000000000000000000000000000000;
//   src1.bits[3] = 0b00000000000000000000000000000000;

//   src2.bits[0] = 0b00000000000000000000000000000000;
//   src2.bits[1] = 0b00000000000000000000000000000000;
//   src2.bits[2] = 0b00000000000000000000000000000000;
//   src2.bits[3] = 0b00000000000000000000000000000000;
//   s21_decimal result = {{0, 0, 0, 0}};
//   s21_sub(src1, src2, &result);

//   origin.bits[0] = 0b00000000000000000000000000000000;
//   origin.bits[1] = 0b00000000000000000000000000000000;
//   origin.bits[2] = 0b00000000000000000000000000000000;
//   origin.bits[3] = 0b00000000000000000000000000000000;
//   ck_assert_int_eq(origin.bits[3], result.bits[3]);
//   ck_assert_int_eq(origin.bits[2], result.bits[2]);
//   ck_assert_int_eq(origin.bits[1], result.bits[1]);
//   ck_assert_int_eq(origin.bits[0], result.bits[0]);
// }
// END_TEST

// START_TEST(s21_subTest24) {
//   s21_decimal src1, src2, origin;

//   src1.bits[0] = 0b00000000000000000000000000000000;
//   src1.bits[1] = 0b00000000000000000000000000000000;
//   src1.bits[2] = 0b00000000000000000000000000000000;
//   src1.bits[3] = 0b00000000000000000000000000000000;

//   src2.bits[0] = 0b00000000000000000000000000000000;
//   src2.bits[1] = 0b00000000000000000000000000000000;
//   src2.bits[2] = 0b00000000000000000000000000000000;
//   src2.bits[3] = 0b00000000000000000000000000000000;
//   s21_decimal result = {{0, 0, 0, 0}};
//   s21_sub(src1, src2, &result);

//   origin.bits[0] = 0b00000000000000000000000000000000;
//   origin.bits[1] = 0b00000000000000000000000000000000;
//   origin.bits[2] = 0b00000000000000000000000000000000;
//   origin.bits[3] = 0b00000000000000000000000000000000;
//   ck_assert_int_eq(origin.bits[3], result.bits[3]);
//   ck_assert_int_eq(origin.bits[2], result.bits[2]);
//   ck_assert_int_eq(origin.bits[1], result.bits[1]);
//   ck_assert_int_eq(origin.bits[0], result.bits[0]);
// }
// END_TEST

// START_TEST(s21_subTest25) {
//   s21_decimal src1, src2, origin;

//   src1.bits[0] = 0b00000000000000000000000000000000;
//   src1.bits[1] = 0b00000000000000000000000000000000;
//   src1.bits[2] = 0b00000000000000000000000000000000;
//   src1.bits[3] = 0b00000000000000000000000000000000;

//   src2.bits[0] = 0b00000000000000000000000000000000;
//   src2.bits[1] = 0b00000000000000000000000000000000;
//   src2.bits[2] = 0b00000000000000000000000000000000;
//   src2.bits[3] = 0b00000000000000000000000000000000;
//   s21_decimal result = {{0, 0, 0, 0}};
//   s21_sub(src1, src2, &result);

//   origin.bits[0] = 0b00000000000000000000000000000000;
//   origin.bits[1] = 0b00000000000000000000000000000000;
//   origin.bits[2] = 0b00000000000000000000000000000000;
//   origin.bits[3] = 0b00000000000000000000000000000000;
//   ck_assert_int_eq(origin.bits[3], result.bits[3]);
//   ck_assert_int_eq(origin.bits[2], result.bits[2]);
//   ck_assert_int_eq(origin.bits[1], result.bits[1]);
//   ck_assert_int_eq(origin.bits[0], result.bits[0]);
// }
// END_TEST

// START_TEST(s21_subTest26) {
//   s21_decimal src1, src2, origin;

//   src1.bits[0] = 0b00101000111101011100001010001111;
//   src1.bits[1] = 0b11110101110000101000111101011100;
//   src1.bits[2] = 0b00000010100011110101110000101000;
//   src1.bits[3] = 0b00000000000000000000000000000000;

//   src2.bits[0] = 0b00000000000000000000000000000001;
//   src2.bits[1] = 0b00000000000000000000000000000000;
//   src2.bits[2] = 0b00000000000000000000000000000000;
//   src2.bits[3] = 0b10000000000000000000000000000000;
//   s21_decimal result = {{0, 0, 0, 0}};
//   s21_sub(src1, src2, &result);

//   origin.bits[0] = 0b00101000111101011100001010010000;
//   origin.bits[1] = 0b11110101110000101000111101011100;
//   origin.bits[2] = 0b00000010100011110101110000101000;
//   origin.bits[3] = 0b00000000000000000000000000000000;
//   ck_assert_int_eq(origin.bits[3], result.bits[3]);
//   ck_assert_int_eq(origin.bits[2], result.bits[2]);
//   ck_assert_int_eq(origin.bits[1], result.bits[1]);
//   ck_assert_int_eq(origin.bits[0], result.bits[0]);
// }
// END_TEST

// START_TEST(s21_subTest27) {
//   s21_decimal src1, src2, origin;

//   src1.bits[0] = 0b01011111000010000000010001011011;
//   src1.bits[1] = 0b01101101111100110111111101100111;
//   src1.bits[2] = 0b00000000000000000000000000000000;
//   src1.bits[3] = 0b00000000000000000000000000000000;

//   src2.bits[0] = 0b00000011111010011010110001001110;
//   src2.bits[1] = 0b00000000000000000000000000000000;
//   src2.bits[2] = 0b00000000000000000000000000000000;
//   src2.bits[3] = 0b00000000000000000000000000000000;
//   s21_decimal result = {{0, 0, 0, 0}};
//   s21_sub(src1, src2, &result);

//   origin.bits[0] = 0b01011011000111100101100000001101;
//   origin.bits[1] = 0b01101101111100110111111101100111;
//   origin.bits[2] = 0b00000000000000000000000000000000;
//   origin.bits[3] = 0b00000000000000000000000000000000;
//   ck_assert_int_eq(origin.bits[3], result.bits[3]);
//   ck_assert_int_eq(origin.bits[2], result.bits[2]);
//   ck_assert_int_eq(origin.bits[1], result.bits[1]);
//   ck_assert_int_eq(origin.bits[0], result.bits[0]);
// }
// END_TEST

// START_TEST(s21_subTest28) {
//   s21_decimal src1, src2, origin;

//   src1.bits[0] = 0b00100111101010100010111011100001;
//   src1.bits[1] = 0b00000000000000000000000000000000;
//   src1.bits[2] = 0b00000000000000000000000000000000;
//   src1.bits[3] = 0b00000000000000000000000000000000;

//   src2.bits[0] = 0b00010000010100101110011001011001;
//   src2.bits[1] = 0b00000000000111110100000111110010;
//   src2.bits[2] = 0b00000000000000000000000000000000;
//   src2.bits[3] = 0b00000000000000000000000000000000;
//   s21_decimal result = {{0, 0, 0, 0}};
//   s21_sub(src1, src2, &result);

//   origin.bits[0] = 0b11101000101010001011011101111000;
//   origin.bits[1] = 0b00000000000111110100000111110001;
//   origin.bits[2] = 0b00000000000000000000000000000000;
//   origin.bits[3] = 0b10000000000000000000000000000000;
//   ck_assert_int_eq(origin.bits[3], result.bits[3]);
//   ck_assert_int_eq(origin.bits[2], result.bits[2]);
//   ck_assert_int_eq(origin.bits[1], result.bits[1]);
//   ck_assert_int_eq(origin.bits[0], result.bits[0]);
// }
// END_TEST

// START_TEST(s21_subTest29) {
//   s21_decimal src1, src2, origin;

//   src1.bits[0] = 0b11111110100100001101100101011111;
//   src1.bits[1] = 0b10000100011001000010000111101000;
//   src1.bits[2] = 0b00000000000000000000000000000001;
//   src1.bits[3] = 0b00000000000100110000000000000000;

//   src2.bits[0] = 0b11010100101011100011110110001010;
//   src2.bits[1] = 0b01110100000101000010011110100011;
//   src2.bits[2] = 0b00000000000010000100000101000100;
//   src2.bits[3] = 0b00000000000110000000000000000000;
//   s21_decimal result = {{0, 0, 0, 0}};
//   s21_sub(src1, src2, &result);

//   origin.bits[0] = 0b00001110111111111010100000101010;
//   origin.bits[1] = 0b00101001110101100000001000110100;
//   origin.bits[2] = 0b00000000000001011111000010100001;
//   origin.bits[3] = 0b10000000000110000000000000000000;
//   ck_assert_int_eq(origin.bits[3], result.bits[3]);
//   ck_assert_int_eq(origin.bits[2], result.bits[2]);
//   ck_assert_int_eq(origin.bits[1], result.bits[1]);
//   ck_assert_int_eq(origin.bits[0], result.bits[0]);
// }
// END_TEST

// START_TEST(s21_subTest30) {
//   s21_decimal src1, src2, origin;

//   src1.bits[0] = 0b01010100010000000011110110001100;
//   src1.bits[1] = 0b10001011010100100000010101011001;
//   src1.bits[2] = 0b00011111101010011000000110101101;
//   src1.bits[3] = 0b10000000000011000000000000000000;

//   src2.bits[0] = 0b01100101111100100100110110101100;
//   src2.bits[1] = 0b00000000000001111010100110101011;
//   src2.bits[2] = 0b00000000000000000000000000000000;
//   src2.bits[3] = 0b10000000000001100000000000000000;
//   s21_decimal result = {{0, 0, 0, 0}};
//   s21_sub(src1, src2, &result);

//   origin.bits[0] = 0b11010010100100100111101010001100;
//   origin.bits[1] = 0b10011110100111100111000100000100;
//   origin.bits[2] = 0b00011111101010011000000100111000;
//   origin.bits[3] = 0b10000000000011000000000000000000;
//   ck_assert_int_eq(origin.bits[3], result.bits[3]);
//   ck_assert_int_eq(origin.bits[2], result.bits[2]);
//   ck_assert_int_eq(origin.bits[1], result.bits[1]);
//   ck_assert_int_eq(origin.bits[0], result.bits[0]);
// }
// END_TEST

// START_TEST(s21_subTest31) {
//   s21_decimal src1, src2, origin;

//   src1.bits[0] = 0b00001011000011110111000010001101;
//   src1.bits[1] = 0b10010110101100000101100101010001;
//   src1.bits[2] = 0b00010001101000010111101110000001;
//   src1.bits[3] = 0b00000000000111000000000000000000;

//   src2.bits[0] = 0b00010111001001010100110000000010;
//   src2.bits[1] = 0b00000000111101010001010110011011;
//   src2.bits[2] = 0b00000000000000000000000000000000;
//   src2.bits[3] = 0b00000000000100010000000000000000;
//   s21_decimal result = {{0, 0, 0, 0}};
//   s21_sub(src1, src2, &result);

//   origin.bits[0] = 0b01011010101111100101111101110011;
//   origin.bits[1] = 0b00101101001111010011000001101000;
//   origin.bits[2] = 0b00000100101010001101010101010111;
//   origin.bits[3] = 0b10000000000111000000000000000000;
//   ck_assert_int_eq(origin.bits[3], result.bits[3]);
//   ck_assert_int_eq(origin.bits[2], result.bits[2]);
//   ck_assert_int_eq(origin.bits[1], result.bits[1]);
//   ck_assert_int_eq(origin.bits[0], result.bits[0]);
// }
// END_TEST

// START_TEST(s21_subTest32) {
//   s21_decimal src1, src2;

//   src1.bits[0] = 0b10101100001010000001100001010101;
//   src1.bits[1] = 0b00110100001010010001111010111100;
//   src1.bits[2] = 0b00000000000000000000000000000100;
//   src1.bits[3] = 0b10000000000101000000000000000000;

//   src2.bits[0] = 0b00010011111011011111011110001000;
//   src2.bits[1] = 0b11000011110010000000101111011001;
//   src2.bits[2] = 0b00000000000000000000000000000100;
//   src2.bits[3] = 0b00000000000000000000000000000000;
//   s21_decimal result = {{0, 0, 0, 0}};
//   s21_sub(src1, src2, &result);
// }
// END_TEST

// START_TEST(s21_subTest33) {
//   s21_decimal src1, src2, origin;

//   src1.bits[0] = 0b10011001100110011001100110011001;
//   src1.bits[1] = 0b10011001100110011001100110011001;
//   src1.bits[2] = 0b00011001100110011001100110011001;
//   src1.bits[3] = 0b10000000000000000000000000000000;

//   src2.bits[0] = 0b00000000000000000000000000000001;
//   src2.bits[1] = 0b00000000000000000000000000000000;
//   src2.bits[2] = 0b00000000000000000000000000000000;
//   src2.bits[3] = 0b00000000000000000000000000000000;
//   s21_decimal result = {{0, 0, 0, 0}};
//   s21_sub(src1, src2, &result);

//   origin.bits[0] = 0b10011001100110011001100110011010;
//   origin.bits[1] = 0b10011001100110011001100110011001;
//   origin.bits[2] = 0b00011001100110011001100110011001;
//   origin.bits[3] = 0b10000000000000000000000000000000;
//   ck_assert_int_eq(origin.bits[3], result.bits[3]);
//   ck_assert_int_eq(origin.bits[2], result.bits[2]);
//   ck_assert_int_eq(origin.bits[1], result.bits[1]);
//   ck_assert_int_eq(origin.bits[0], result.bits[0]);
// }
// END_TEST

START_TEST(s21_subTest34) {
  s21_decimal src1 = {{-1, -1, -1, 0}};
  s21_decimal src2 = {{15, 0, 0, 0}};
  s21_set_pow(&src2, 1);
  s21_sub(src1, src2, &src1);
  s21_decimal origin = {{-2, -1, -1, 0}};
  ck_assert_int_eq(origin.bits[3], src1.bits[3]);
  ck_assert_int_eq(origin.bits[2], src1.bits[2]);
  ck_assert_int_eq(origin.bits[1], src1.bits[1]);
  ck_assert_int_eq(origin.bits[0], src1.bits[0]);
}
END_TEST

START_TEST(s21_test_decimal_sub_simple_0) {
  s21_decimal c = {{10, 0, 0, 0}};
  s21_decimal d = {{5, 0, 0, 0}};
  s21_decimal etalon = {{5, 0, 0, 0}};

  s21_decimal res = {{0, 0, 0, 0}};
  s21_decimal* p_res = &res;

  int add = s21_sub(c, d, p_res);
  ck_assert_int_eq(add, 0);

  int equal = s21_is_equal(res, etalon);
  ck_assert_int_eq(equal, 1);
}
END_TEST

START_TEST(s21_test_decimal_sub_simple_1) {
  s21_decimal c = {{100, 0, 0, 0}};
  s21_decimal d = {{5, 0, 0, 0}};
  s21_decimal etalon = {{5, 0, 0, 0}};

  s21_decimal res = {{0, 0, 0, 0}};
  s21_decimal* p_res = &res;

  int add = s21_sub(c, d, p_res);
  ck_assert_int_eq(add, 0);

  int equal = s21_is_equal(res, etalon);
  ck_assert_int_eq(equal, 0);
}
END_TEST

START_TEST(s21_test_decimal_sub_simple_2) {
  s21_decimal c = {{INT_MAX, 0, 0, 0}};
  s21_decimal d = {{5, 0, 0, 0}};
  s21_decimal etalon = {{2147483642, 0, 0, 0}};
  s21_decimal res = {{0, 0, 0, 0}};
  s21_decimal* p_res = &res;

  int add = s21_sub(c, d, p_res);
  ck_assert_int_eq(add, 0);

  int equal = s21_is_equal(res, etalon);
  ck_assert_int_eq(equal, 1);
}
END_TEST

START_TEST(s21_test_decimal_sub_simple_3) {
  s21_decimal c = {{INT_MAX, INT_MAX, 0, 0}};
  s21_decimal d = {{5, 0, 0, 0}};
  s21_decimal etalon = {{INT_MAX - 5, INT_MAX, 0, 0}};

  s21_decimal res = {{0, 0, 0, 0}};
  s21_decimal* p_res = &res;

  int add = s21_sub(c, d, p_res);
  ck_assert_int_eq(add, 0);

  int equal = s21_is_equal(res, etalon);
  ck_assert_int_eq(equal, 1);
}

START_TEST(s21_test_decimal_sub_simple_7) {
  s21_decimal c = {{1, 0, 0, 0}};
  s21_decimal d = {{1, 0, 0, ~(INT_MAX)}};
  s21_decimal etalon = {{2, 0, 0, 0}};

  s21_decimal res = {{0, 0, 0, 0}};
  s21_decimal* p_res = &res;

  int add = s21_sub(c, d, p_res);
  ck_assert_int_eq(add, 0);

  int equal = s21_is_equal(res, etalon);
  ck_assert_int_eq(equal, 1);
}
END_TEST

START_TEST(s21_test_decimal_sub_simple_8) {
  s21_decimal c = {{1, 0, 0, ~(INT_MAX)}};
  s21_decimal d = {{1, 0, 0, ~(INT_MAX)}};
  s21_decimal etalon = {{0, 0, 0, 0}};

  s21_decimal res = {{0, 0, 0, 0}};
  s21_decimal* p_res = &res;

  int add = s21_sub(c, d, p_res);
  ck_assert_int_eq(add, 0);

  int equal = s21_is_equal(res, etalon);
  ck_assert_int_eq(equal, 1);
}
END_TEST

START_TEST(s21_test_decimal_sub_simple_10) {
  s21_decimal c = {{100, 0, 0, 0}};
  s21_decimal d = {{100, 0, 0, ~(INT_MAX)}};
  s21_decimal etalon = {{200, 0, 0, 0}};

  s21_decimal res = {{0, 0, 0, 0}};
  s21_decimal* p_res = &res;

  int add = s21_sub(c, d, p_res);
  ck_assert_int_eq(add, 0);

  int equal = s21_is_equal(res, etalon);
  ck_assert_int_eq(equal, 1);
}
END_TEST

START_TEST(s21_test_decimal_sub_simple_11) {
  s21_decimal c = {{100, 0, 0, ~(INT_MAX)}};
  s21_decimal d = {{100, 0, 0, ~(INT_MAX)}};

  s21_decimal res = {{0, 0, 0, 0}};
  s21_decimal* p_res = &res;

  int add = s21_sub(c, d, p_res);
  ck_assert_int_eq(add, 0);
}
END_TEST

Suite* suite_sub(void) {
  Suite* s;
  TCase* tc;
  s = suite_create("s21_sub");
  tc = tcase_create("case_sub");

  tcase_add_test(tc, sub_test_1);
  tcase_add_test(tc, sub_test_2);
  tcase_add_test(tc, sub_test_3);
  tcase_add_test(tc, sub_test_4);
  tcase_add_test(tc, sub_test_5);
  tcase_add_test(tc, sub_test_6);
  tcase_add_test(tc, sub_test_7);
  tcase_add_test(tc, sub_test_8);
  tcase_add_test(tc, sub_test_9);
  tcase_add_test(tc, sub_test_10);

  // tcase_add_test(tc, s21_subTest1);
  // tcase_add_test(tc, s21_subTest2);
  // tcase_add_test(tc, s21_subTest3);
  // tcase_add_test(tc, s21_subTest4);
  // tcase_add_test(tc, s21_subTest5);
  // tcase_add_test(tc, s21_subTest6);
  // tcase_add_test(tc, s21_subTest7);
  // tcase_add_test(tc, s21_subTest8);
  // tcase_add_test(tc, s21_subTest9);
  // tcase_add_test(tc, s21_subTest10);
  // tcase_add_test(tc, s21_subTest11);
  // tcase_add_test(tc, s21_subTest12);
  // tcase_add_test(tc, s21_subTest13);
  // tcase_add_test(tc, s21_subTest14);
  // tcase_add_test(tc, s21_subTest15);
  // tcase_add_test(tc, s21_subTest16);
  tcase_add_test(tc, s21_subTest17);
  // tcase_add_test(tc, s21_subTest18);

  // tcase_add_test(tc, s21_subTest21);
  // tcase_add_test(tc, s21_subTest22);
  // tcase_add_test(tc, s21_subTest23);
  // tcase_add_test(tc, s21_subTest24);
  // tcase_add_test(tc, s21_subTest25);
  // tcase_add_test(tc, s21_subTest26);
  // tcase_add_test(tc, s21_subTest27);
  // tcase_add_test(tc, s21_subTest28);
  // tcase_add_test(tc, s21_subTest29);
  // tcase_add_test(tc, s21_subTest30);
  // tcase_add_test(tc, s21_subTest31);
  // tcase_add_test(tc, s21_subTest32);
  // tcase_add_test(tc, s21_subTest33);
  tcase_add_test(tc, s21_subTest34);

  tcase_add_test(tc, s21_test_decimal_sub_simple_0);
  tcase_add_test(tc, s21_test_decimal_sub_simple_1);
  tcase_add_test(tc, s21_test_decimal_sub_simple_2);
  tcase_add_test(tc, s21_test_decimal_sub_simple_3);

  tcase_add_test(tc, s21_test_decimal_sub_simple_7);
  tcase_add_test(tc, s21_test_decimal_sub_simple_8);
  tcase_add_test(tc, s21_test_decimal_sub_simple_10);
  tcase_add_test(tc, s21_test_decimal_sub_simple_11);

  tcase_add_test(tc, sub_test_11);
  tcase_add_test(tc, sub_test_12);
  tcase_add_test(tc, sub_test_13);
  tcase_add_test(tc, sub_test_14);
  tcase_add_test(tc, sub_test_15);
  tcase_add_test(tc, sub_test_16);
  tcase_add_test(tc, sub_test_17);
  tcase_add_test(tc, sub_test_18);
  tcase_add_test(tc, sub_test_19);
  tcase_add_test(tc, sub_test_20);
  tcase_add_test(tc, sub_test_21);
  tcase_add_test(tc, s21_sub_int_22);
  tcase_add_test(tc, s21_sub_int_23);
  tcase_add_test(tc, s21_sub_int_24);
  tcase_add_test(tc, s21_sub_int_25);
  tcase_add_test(tc, s21_sub_int_26);

  // tcase_add_test(tc, s21_sub_max_27);
  // tcase_add_test(tc, s21_sub_max_28);

  suite_add_tcase(s, tc);
  return s;
}
