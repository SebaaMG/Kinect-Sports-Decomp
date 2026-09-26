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
extern int fn_83065C28();
extern int fn_8306AB38();
extern unsigned int lbl_8217E690;
extern unsigned int uStack_48;
extern unsigned int uStack_4c;


void fn_83063A88(int param_1)

{
  int iVar1;
  ulonglong uVar2;
  undefined *puStack_50;
  uint uStack_4c;
  uint uStack_48;
  int aiStack_40 [4];
  undefined4 *puStack_30;
  
  if (*(char *)(param_1 + 0x10) == '\0') {
    uStack_4c = *(uint *)(param_1 + 0x2c);
    uVar2 = (ulonglong)uStack_4c;
    if (uVar2 != 0) {
      aiStack_40[0] = 0;
      puStack_50 = &lbl_8217E690;
      aiStack_40[1] = 0;
      aiStack_40[2] = 0;
      puStack_30 = (undefined4 *)0x0;
      uStack_48 = uStack_4c;
      do {
        fn_8306AB38(aiStack_40,uVar2);
        uVar2 = (**(code **)(puStack_50 + 4))(&puStack_50,uStack_48);
        uStack_48 = (uint)uVar2;
      } while (uVar2 != 0);
      uStack_48 = 0;
      iVar1 = aiStack_40[0];
      while (iVar1 != 0) {
        iVar1 = *(int *)(iVar1 + 4);
        fn_83065C28();
      }
      *(undefined4 *)(param_1 + 0x2c) = 0;
      for (; puStack_30 != (undefined4 *)0x0; puStack_30 = (undefined4 *)puStack_30[2]) {
        puStack_30[3] = 0;
        *puStack_30 = 0;
      }
    }
  }
  return;
}

