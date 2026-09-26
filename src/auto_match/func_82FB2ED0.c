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
extern int fn_82FA5060();
extern int fn_82FA5190();
extern int fn_82FB76F8();
extern int fn_830080D8();
extern unsigned int lbl_8216D59C;
extern unsigned int lbl_8216D5A4;
extern unsigned int lbl_831BC768;


undefined8 fn_82FB2ED0(undefined8 param_1,int param_2,int *param_3,uint param_4)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  uint uVar6;
  
  uVar6 = 0;
  if (param_4 != 0) {
    do {
      piVar1 = (int *)*param_3;
      *param_3 = (int)(piVar1 + 6);
      if (*piVar1 == 0) {
        puVar3 = (undefined4 *)fn_82FA5060(lbl_831BC768,0x2c);
        if (puVar3 == (undefined4 *)0x0) {
          return 2;
        }
        puVar3[1] = param_2;
        *puVar3 = &lbl_8216D5A4;
        puVar3[2] = 0;
        *(undefined2 *)((int)puVar3 + 0xe) = 0x32;
        puVar3[4] = 0;
        puVar3[5] = 0;
        puVar3[6] = 0;
        puVar3[7] = 0;
        puVar3[8] = 0;
        *(undefined1 *)(puVar3 + 9) = 0;
        *(undefined1 *)((int)puVar3 + 0x25) = 1;
        *(undefined1 *)((int)puVar3 + 0x26) = 0;
        *(undefined2 *)(puVar3 + 10) = 0;
        puVar4 = (undefined4 *)fn_830080D8(param_2 + 0x10);
        if (puVar4 == (undefined4 *)0x0) goto LAB_82fb3074;
        *puVar4 = puVar3;
        *(undefined2 *)(puVar3 + 10) = *(undefined2 *)(piVar1 + 5);
        *(undefined2 *)(puVar3 + 3) = *(undefined2 *)(piVar1 + 4);
        *(undefined2 *)((int)puVar3 + 0xe) = *(undefined2 *)((int)piVar1 + 0x12);
        puVar3[7] = piVar1[3];
        *(undefined1 *)(puVar3 + 9) = 0;
        *(undefined1 *)((int)puVar3 + 0x25) = *(undefined1 *)((int)piVar1 + 0x17);
        puVar3[2] = piVar1[1];
        if ((piVar1[2] != 0) && (iVar5 = ((int (*)())fn_82FB2ED0)(param_1,puVar3,param_3), iVar5 != 1)) {
          return 2;
        }
      }
      else {
        puVar3 = (undefined4 *)fn_82FA5060(lbl_831BC768,0x14);
        if (puVar3 == (undefined4 *)0x0) {
          return 2;
        }
        puVar3[1] = param_2;
        *puVar3 = &lbl_8216D59C;
        puVar3[2] = 0;
        *(undefined2 *)((int)puVar3 + 0xe) = 0x32;
        puVar4 = (undefined4 *)fn_830080D8(param_2 + 0x10);
        if (puVar4 == (undefined4 *)0x0) {
LAB_82fb3074:
          uVar2 = lbl_831BC768;
          (**(code **)*puVar3)(puVar3,0);
          fn_82FA5190(uVar2,puVar3);
          return 2;
        }
        *puVar4 = puVar3;
        *(undefined2 *)(puVar3 + 3) = *(undefined2 *)(piVar1 + 4);
        *(undefined2 *)((int)puVar3 + 0xe) = *(undefined2 *)((int)piVar1 + 0x12);
        puVar3[4] = *piVar1;
        puVar3[2] = piVar1[1];
        fn_82FB76F8(param_2);
      }
      if (*(short *)((int)piVar1 + 0x12) != 0x32) {
        *(undefined1 *)(param_2 + 0x24) = 1;
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 < param_4);
  }
  return 1;
}

