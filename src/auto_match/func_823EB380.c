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
#define CONCAT44(h,l) ((U64)((((U32)(h)) << 32) | ((U32)(l))))
extern unsigned int *auStack_148;
extern unsigned int *auStack_30;
extern unsigned int *auStack_98;
extern int fn_8227CB30();
extern int fn_82359C18();
extern int fn_823CE9E0();
extern int fn_823D1ED0();
extern int fn_82F68CC0();
extern unsigned int uStack_a0;
extern unsigned int uStack_a8;
extern unsigned int uStack_b0;
extern unsigned int uStack_b8;
extern unsigned int uStack_c0;
extern unsigned int uStack_c4;
extern unsigned int uStack_c8;
extern unsigned int uStack_d0;
extern unsigned int uStack_dc;


void fn_823EB380(int param_1,undefined8 param_2)

{
  undefined8 uVar1;
  ulonglong uVar2;
  undefined1 auStack_148 [104];
  code *pcStack_e0;
  undefined4 uStack_dc;
  undefined8 uStack_d0;
  uint uStack_c8;
  undefined4 uStack_c4;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined1 auStack_98 [104];
  undefined1 auStack_30 [24];
  
  uStack_c8 = *(uint *)(param_1 + 4);
  uVar2 = (ulonglong)uStack_c8;
  uStack_dc = 0;
  pcStack_e0 = fn_823CE9E0;
  uStack_d0 = 0x823ce9e000000000;
  fn_82F68CC0(&uStack_c0,param_2,0x90);
  fn_82F68CC0(auStack_148,auStack_98,0x68);
  uVar1 = fn_823D1ED0(auStack_30,uStack_d0,CONCAT44(uStack_c8,uStack_c4),uStack_c0,uStack_b8,
                          uStack_b0,uStack_a8,uStack_a0);
  fn_8227CB30(uVar2 + 0xbc0,uVar1);
  fn_82359C18(uVar1);
  return;
}

