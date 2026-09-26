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
extern int fn_8302AA50();
extern int fn_8302ABC0();
extern unsigned int lbl_831BC768;


void fn_82FF57E0(undefined8 param_1,longlong param_2,int *param_3)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  char cVar4;
  int *piVar5;
  
  piVar5 = (int *)*param_3;
  if (piVar5 != (int *)param_3[1]) {
    do {
      puVar1 = (undefined4 *)*piVar5;
      iVar2 = puVar1[0xd];
      if (iVar2 == 6) {
        fn_8302ABC0(puVar1);
        uVar3 = lbl_831BC768;
        (**(code **)*puVar1)(puVar1,0);
        fn_82FA5190(uVar3,puVar1);
        if (1 < (uint)(param_3[1] - *param_3 >> 2)) {
          *piVar5 = *(int *)(param_3[1] + -4);
        }
        param_3[1] = param_3[1] + -4;
      }
      else {
        if (iVar2 == 2) {
          puVar1[9] = (int)param_2;
          puVar1[0xd] = 3;
        }
        else if (iVar2 == 4) {
          puVar1[0xd] = 1;
          puVar1[6] = (float)(param_2 - (ulonglong)(uint)puVar1[9] & 0xffffffff) + (float)puVar1[6];
        }
        if ((puVar1[0xd] == 1) && (cVar4 = fn_8302AA50(puVar1,param_2), cVar4 != '\0')) {
          fn_8302ABC0(puVar1);
          if (1 < (uint)(param_3[1] - *param_3 >> 2)) {
            *piVar5 = *(int *)(param_3[1] + -4);
          }
          param_3[1] = param_3[1] + -4;
          uVar3 = lbl_831BC768;
          (**(code **)*puVar1)(puVar1,0);
          fn_82FA5190(uVar3,puVar1);
        }
        else {
          piVar5 = piVar5 + 1;
        }
      }
    } while (piVar5 != (int *)param_3[1]);
  }
  return;
}

