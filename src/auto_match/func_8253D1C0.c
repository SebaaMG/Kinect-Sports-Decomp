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
extern unsigned int *auStack_50;
extern int fn_8253D630();
extern int fn_82A1EFC0();
extern int fn_82D81078();
extern int fn_82D85E48();
extern int fn_82D86288();
extern int fn_82D86660();
extern int fn_82D888D0();
extern int fn_82D88EF8();
extern int fn_82D890C8();
extern int fn_82D891F0();


void fn_8253D1C0(int param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined1 auStack_50 [16];
  undefined1 auStack_40 [64];
  
  if (((*(short *)(param_1 + 0x60) != 0) && (*(int *)(param_2 + 0x1f8) != 0)) &&
     (*(undefined4 **)(param_1 + 0x50) < *(undefined4 **)(param_1 + 0x54))) {
    fn_82D81078(*(undefined4 *)(param_2 + 0x1f8),**(undefined4 **)(param_1 + 0x50),1);
                    /* WARNING: Subroutine does not return */
    fn_82A1EFC0(auStack_40,0,4);
  }
  *(undefined2 *)(param_1 + 0x60) = 0;
  *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(param_1 + 0x50);
  if ((*(short *)(param_1 + 0xb0) != 0) && (*(int *)(param_2 + 0x1f8) != 0)) {
    puVar2 = *(undefined4 **)(param_1 + 0xa4);
    for (puVar1 = *(undefined4 **)(param_1 + 0xa0); puVar1 < puVar2; puVar1 = puVar1 + 1) {
      fn_82D88EF8(*(undefined4 *)(param_2 + 0x1f8),*puVar1);
    }
  }
  *(undefined2 *)(param_1 + 0xb0) = 0;
  *(undefined4 *)(param_1 + 0xa4) = *(undefined4 *)(param_1 + 0xa0);
  if ((*(short *)(param_1 + 0xc4) != 0) && (*(int *)(param_2 + 0x1f8) != 0)) {
    puVar2 = *(undefined4 **)(param_1 + 0xb8);
    for (puVar1 = *(undefined4 **)(param_1 + 0xb4); puVar1 < puVar2; puVar1 = puVar1 + 1) {
      fn_82D890C8(auStack_50,*(undefined4 *)(param_2 + 0x1f8),*puVar1);
    }
  }
  *(undefined2 *)(param_1 + 0xc4) = 0;
  *(undefined4 *)(param_1 + 0xb8) = *(undefined4 *)(param_1 + 0xb4);
  if ((*(short *)(param_1 + 0x74) != 0) && (*(int *)(param_2 + 0x1f8) != 0)) {
    puVar2 = *(undefined4 **)(param_1 + 100);
    puVar1 = *(undefined4 **)(param_1 + 0x68);
    fn_82D85E48(*(int *)(param_2 + 0x1f8),puVar2);
    if (*(int *)(param_2 + 0x2ec) == 0) {
      for (; puVar2 < puVar1; puVar2 = puVar2 + 1) {
        fn_8253D630(param_2,*puVar2);
      }
    }
  }
  *(undefined2 *)(param_1 + 0x74) = 0;
  *(undefined4 *)(param_1 + 0x68) = *(undefined4 *)(param_1 + 100);
  if ((*(short *)(param_1 + 0x88) != 0) && (*(int *)(param_2 + 0x1f8) != 0)) {
    puVar2 = *(undefined4 **)(param_1 + 0x7c);
    for (puVar1 = *(undefined4 **)(param_1 + 0x78); puVar1 < puVar2; puVar1 = puVar1 + 1) {
      fn_82D888D0(*(undefined4 *)(param_2 + 0x1f8),*puVar1);
    }
  }
  *(undefined2 *)(param_1 + 0x88) = 0;
  *(undefined4 *)(param_1 + 0x7c) = *(undefined4 *)(param_1 + 0x78);
  if ((*(short *)(param_1 + 0x9c) != 0) && (*(int *)(param_2 + 0x1f8) != 0)) {
    puVar2 = *(undefined4 **)(param_1 + 0x90);
    for (puVar1 = *(undefined4 **)(param_1 + 0x8c); puVar1 < puVar2; puVar1 = puVar1 + 1) {
      fn_82D891F0(*(undefined4 *)(param_2 + 0x1f8),*puVar1);
    }
  }
  *(undefined2 *)(param_1 + 0x9c) = 0;
  *(undefined4 *)(param_1 + 0x90) = *(undefined4 *)(param_1 + 0x8c);
  if ((*(short *)(param_1 + 0xd8) != 0) && (*(int *)(param_2 + 0x1f8) != 0)) {
    fn_82D86288(*(int *)(param_2 + 0x1f8),*(undefined4 *)(param_1 + 200));
  }
  *(undefined2 *)(param_1 + 0xd8) = 0;
  *(undefined4 *)(param_1 + 0xcc) = *(undefined4 *)(param_1 + 200);
  if ((*(short *)(param_1 + 0xec) != 0) && (*(int *)(param_2 + 0x1f8) != 0)) {
    fn_82D86660(*(int *)(param_2 + 0x1f8),*(undefined4 *)(param_1 + 0xdc));
  }
  *(undefined2 *)(param_1 + 0xec) = 0;
  *(undefined4 *)(param_1 + 0xe0) = *(undefined4 *)(param_1 + 0xdc);
  return;
}

