typedef unsigned char undefined1;
typedef unsigned char byte;
typedef unsigned char undefined;
typedef unsigned char bool;
#define true 1
#define false 0
typedef unsigned short undefined2;
typedef unsigned short ushort;
typedef unsigned short word;
typedef unsigned int undefined4;
typedef unsigned int uint;
typedef unsigned int dword;
typedef unsigned int ulong;
typedef unsigned __int64 undefined8;
typedef unsigned __int64 ulonglong;
typedef unsigned __int64 qword;
typedef __int64 longlong;
typedef int (*code)();
typedef unsigned char U8;
typedef unsigned short U16;
typedef unsigned int U32;
typedef unsigned __int64 U64;
typedef signed char S8;
typedef signed short S16;
typedef signed int S32;
typedef __int64 S64;
typedef struct { U64 lo, hi; } V16;
extern unsigned int *auStack_20;
extern int fn_8240D930();
extern int fn_825B5568();
extern int fn_8265CA20();
extern int fn_828B22F0();
extern int fn_828B2BF8();
extern int fn_828B3E88();
extern int fn_828B45A8();
extern unsigned int lbl_82024E20;
extern unsigned int lbl_82024E60;


void fn_828B5110(undefined4 *param_1)

{
  char cVar2;
  int *piVar1;
  undefined1 auStack_20 [8];
  
  *param_1 = &lbl_82024E60;
  if (*(char *)(param_1 + 0xe) != '\0') {
    fn_828B2BF8();
    cVar2 = fn_825B5568();
    if (cVar2 != '\0') {
      fn_828B2BF8();
      piVar1 = (int *)fn_8240D930();
      (**(code **)(*piVar1 + 0x24))(piVar1,param_1[0x10]);
    }
    *(undefined1 *)(param_1 + 0xe) = 0;
  }
  fn_828B45A8(auStack_20,param_1 + 0x15,*(undefined4 *)param_1[0x16]);
  fn_8265CA20(param_1[0x16]);
  fn_828B45A8(auStack_20,param_1 + 0x11,*(undefined4 *)param_1[0x12]);
  fn_8265CA20(param_1[0x12]);
  *param_1 = &lbl_82024E20;
  fn_828B22F0(param_1 + 8);
  fn_8265CA20(param_1[8]);
  fn_828B3E88(param_1 + 2);
  fn_8265CA20(param_1[2]);
  param_1[2] = 0;
  return;
}

