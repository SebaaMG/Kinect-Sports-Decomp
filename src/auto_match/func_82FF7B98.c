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
extern int fn_82FA5190();
extern int fn_82FF8410();
extern unsigned int lbl_831BC768;


undefined8 fn_82FF7B98(int param_1,char param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  
  puVar4 = *(undefined4 **)(param_1 + 4);
  if (puVar4 != *(undefined4 **)(param_1 + 8)) {
    do {
      puVar1 = (undefined4 *)puVar4[1];
      if ((param_2 == '\0') || (puVar1[0xc] == 0)) {
        if (puVar1[4] != 0) {
          puVar1[5] = puVar1[4];
          fn_82FA5190(lbl_831BC768);
          puVar1[4] = 0;
          puVar1[5] = 0;
          puVar1[6] = 0;
        }
        if (puVar1[0xf] != 0) {
          puVar1[0x10] = puVar1[0xf];
          fn_82FA5190(lbl_831BC768);
          puVar1[0xf] = 0;
          puVar1[0x10] = 0;
          puVar1[0x11] = 0;
        }
        fn_82FF8410(puVar1 + 7);
        uVar3 = lbl_831BC768;
        if (puVar1 != (undefined4 *)0x0) {
          (**(code **)*puVar1)(puVar1,0);
          fn_82FA5190(uVar3,puVar1);
        }
        iVar2 = *(int *)(param_1 + 8);
        if (1 < (uint)(iVar2 - *(int *)(param_1 + 4) >> 3)) {
          *puVar4 = *(undefined4 *)(iVar2 + -8);
          puVar4[1] = *(undefined4 *)(iVar2 + -4);
        }
        *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + -8;
      }
      else {
        puVar4 = puVar4 + 2;
      }
    } while (puVar4 != *(undefined4 **)(param_1 + 8));
  }
  return 1;
}

