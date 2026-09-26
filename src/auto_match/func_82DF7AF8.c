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
extern unsigned int *auStack_78;
extern int fn_82CE5410();
extern int fn_82CE6310();
extern int fn_82CE63B0();
extern int fn_82DF4EF8();
extern int fn_82DF6CD0();
extern int fn_82F68CC0();
extern unsigned int iStack_7c;
extern unsigned int iStack_80;


undefined8 fn_82DF7AF8(int *param_1,undefined8 param_2,int *param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  int iStack_80;
  int iStack_7c;
  undefined1 auStack_78 [120];
  
  iVar6 = param_1[1];
  iVar2 = fn_82CE5410();
  if ((int)(param_3[2] & 0x3fffffffU) < iVar6) {
    iVar5 = (param_3[2] & 0x3fffffffU) << 1;
    if (iVar5 <= iVar6) {
      iVar5 = iVar6;
    }
    fn_82CE6310(*(undefined4 *)(iVar2 + 0x10),param_3,iVar5,4);
  }
  iVar6 = 0;
  if (0 < param_1[1]) {
    iVar2 = 0;
    do {
      piVar1 = *(int **)(iVar2 + *param_1);
      iVar5 = *piVar1;
      for (piVar7 = piVar1 + 4; piVar7 < (int *)((int)piVar1 + iVar5 + 0x10);
          piVar7 = (int *)(iStack_7c + (int)piVar7)) {
        iStack_80 = 0;
        iStack_7c = 0;
        iVar3 = fn_82CE5410();
        puVar4 = (undefined4 *)
                 (**(code **)(**(int **)(iVar3 + 0x10) + 4))(*(int **)(iVar3 + 0x10),0x20);
        if (puVar4 == (undefined4 *)0x0) {
          puVar4 = (undefined4 *)0x0;
        }
        else {
          *puVar4 = 0;
          puVar4[1] = 0;
          puVar4[2] = 0x80000000;
          puVar4[3] = 0;
          puVar4[4] = 0;
          puVar4[5] = 0x80000000;
          puVar4[6] = 0xffffffff;
        }
        iVar3 = fn_82DF6CD0(piVar7,0,param_2,&iStack_7c,auStack_78,&iStack_80,puVar4);
        if (iVar3 != 0) {
          if (puVar4 != (undefined4 *)0x0) {
            fn_82DF4EF8(puVar4);
            iVar6 = fn_82CE5410();
            (**(code **)(**(int **)(iVar6 + 0x10) + 8))(*(int **)(iVar6 + 0x10),puVar4,0x20);
          }
          return 1;
        }
        if (puVar4[1] == 0) {
          fn_82DF4EF8(puVar4);
          iVar3 = fn_82CE5410();
          (**(code **)(**(int **)(iVar3 + 0x10) + 8))(*(int **)(iVar3 + 0x10),puVar4,0x20);
        }
        else {
          puVar4[6] = iVar6;
          puVar4[7] = (iStack_80 - (int)piVar1) + -0x10;
          iVar3 = fn_82CE5410();
          if (param_3[4] == (param_3[5] & 0x3fffffffU)) {
                    /* WARNING: Subroutine does not return */
            fn_82CE63B0(*(undefined4 *)(iVar3 + 0x10),param_3 + 3,4);
          }
          *(undefined4 **)(param_3[4] * 4 + param_3[3]) = puVar4;
          param_3[4] = param_3[4] + 1;
        }
      }
      iVar5 = fn_82CE5410();
      if (param_3[1] == (param_3[2] & 0x3fffffffU)) {
                    /* WARNING: Subroutine does not return */
        fn_82CE63B0(*(undefined4 *)(iVar5 + 0x10),param_3,4);
      }
      param_3[1] = param_3[1] + 1;
      iVar5 = fn_82CE5410();
      puVar4 = (undefined4 *)
               (**(code **)(**(int **)(iVar5 + 0x10) + 4))(*(int **)(iVar5 + 0x10),0x200);
      if (puVar4 == (undefined4 *)0x0) {
        puVar4 = (undefined4 *)0x0;
      }
      else {
        *puVar4 = 0;
      }
      *(undefined4 **)(iVar2 + *param_3) = puVar4;
      fn_82F68CC0(*(undefined4 *)(iVar2 + *param_3),piVar1,0x200);
      iVar6 = iVar6 + 1;
      iVar2 = iVar2 + 4;
    } while (iVar6 < param_1[1]);
  }
  return 0;
}

