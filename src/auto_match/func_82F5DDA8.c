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
extern unsigned int *auStack_50;
extern unsigned int *auStack_80;
extern int fn_82F5D418();
extern int fn_82F5DD50();
extern int fn_82F5DEE0();
extern int fn_82F5E4D8();
extern int fn_82F68CC0();


void fn_82F5DDA8(int param_1,int *param_2)

{
  undefined8 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 auStack_80 [48];
  undefined1 auStack_50 [56];
  
  if (*(int *)(param_1 + 0x118) < 1) {
    iVar2 = *(int *)(param_1 + 0x114);
    if (iVar2 != 1) {
      if (iVar2 == 2) {
        fn_82F5DD50(param_1);
        uVar1 = fn_82F5D418((double)*(uint *)(param_1 + 0x13c),
                                  (double)*(uint *)(param_1 + 0x140),
                                  (double)*(uint *)(param_1 + 0x144),auStack_50);
        fn_82F68CC0(auStack_80,uVar1,0x2c);
        fn_82F5DEE0(param_2,auStack_80);
        uVar3 = 3;
      }
      else {
        if (iVar2 != 3) {
          return;
        }
        fn_82F5E4D8(param_2);
        if (*param_2 != 0) {
          return;
        }
        uVar3 = 0;
      }
      *(undefined4 *)(param_1 + 0x114) = uVar3;
      return;
    }
    fn_82F5E4D8(param_2);
    if (*param_2 != 0) {
      return;
    }
    iVar2 = 10;
    *(undefined4 *)(param_1 + 0x114) = 2;
  }
  else {
    iVar2 = *(int *)(param_1 + 0x118) + -1;
  }
  *(int *)(param_1 + 0x118) = iVar2;
  return;
}

