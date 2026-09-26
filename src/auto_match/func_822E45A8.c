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
extern unsigned int *auStack_40;
extern unsigned int *auStack_60;
extern unsigned int *auStack_80;
extern unsigned int *auStack_a0;
extern float fRam831d14dc;
extern float fRam831d14e0;
extern int fn_82230110();
extern int fn_82230300();
extern int fn_822AF138();
extern int fn_822C8C08();
extern int fn_822E5340();
extern int fn_822E53F8();
extern int fn_822E54B0();


void fn_822E45A8(int param_1)

{
  float fVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined1 auStack_a0 [32];
  undefined1 auStack_80 [32];
  undefined1 auStack_60 [32];
  undefined1 auStack_40 [64];
  
  *(undefined4 *)(*(int *)(param_1 + 0x118) + 0x2f4) = 1;
  if (*(int *)(param_1 + 0x24) == 0) {
    fn_822C8C08(*(undefined4 *)(param_1 + 0x114),0xffffffff821adebc);
    fn_82230110(auStack_80,0xffffffff821adec4);
    fn_822E53F8(param_1,auStack_80);
    fn_82230300(auStack_80,1,0);
    fn_82230110(auStack_40,0xffffffff821aded8);
    fn_822E5340(param_1,auStack_40);
    puVar3 = auStack_40;
  }
  else {
    fn_822C8C08(*(undefined4 *)(param_1 + 0x114),0xffffffff821ade9c);
    fn_82230110(auStack_a0,0xffffffff821adea8);
    fn_822E53F8(param_1,auStack_a0);
    fn_82230300(auStack_a0,1,0);
    fn_82230110(auStack_60,0xffffffff821ade9c);
    fn_822E5340(param_1,auStack_60);
    puVar3 = auStack_60;
  }
  fn_82230300(puVar3,1,0);
  fn_822E54B0(param_1);
  fVar1 = fRam831d14e0;
  if (*(int *)(param_1 + 0x24) != 0) {
    fVar1 = fRam831d14dc;
  }
  iVar2 = *(int *)(param_1 + 0x14);
  if (*(float *)(iVar2 + 0x8bc) != fVar1) {
    *(float *)(iVar2 + 0x8bc) = fVar1;
    *(undefined4 *)(iVar2 + 0x170) = 0;
  }
                    /* WARNING: Subroutine does not return */
  fn_822AF138(*(undefined4 *)(param_1 + 0x110),1);
}

