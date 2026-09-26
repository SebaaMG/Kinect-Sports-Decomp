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
extern unsigned int *auStack_80;
extern int fn_82CE5410();
extern int fn_82CE63B0();
extern int fn_82D0B6F8();
extern int fn_82D0B888();
extern int fn_82D20448();
extern int fn_82D27FF0();
extern int fn_82D28488();
extern int fn_82D29220();
extern unsigned int iStack_74;
extern unsigned int iStack_78;
extern unsigned int uStack_70;


int * fn_82D2A3E0(double param_1,double param_2,int *param_3,undefined8 param_4,undefined8 param_5
                   ,int *param_6)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  double dVar7;
  undefined1 auStack_80 [8];
  int iStack_78;
  int iStack_74;
  uint uStack_70;
  
  puVar1 = (undefined4 *)fn_82D28488(param_4);
  *param_3 = 10;
  piVar2 = (int *)fn_82D29220(auStack_80,puVar1,param_5);
  iVar4 = *piVar2;
  *param_3 = iVar4;
  if (iVar4 == 0) {
    iStack_78 = 0;
    iStack_74 = 0;
    uStack_70 = 0x80000000;
    fn_82D20448(puVar1);
    fn_82D27FF0(puVar1,&iStack_78,1,1);
    iVar4 = 0;
    if (0 < iStack_74) {
      iVar6 = 0;
      do {
        iVar3 = *(int *)(*(int *)(iVar6 + iStack_78) + 0x7b8);
        if (iVar3 == 0) {
          *param_3 = 2;
        }
        else {
          dVar7 = (double)fn_82D0B888(iVar3);
          if ((dVar7 < param_2) || (dVar7 = (double)fn_82D0B6F8(iVar3), dVar7 < param_1)) {
            *param_3 = 8;
          }
        }
        iVar4 = iVar4 + 1;
        iVar6 = iVar6 + 4;
      } while (iVar4 < iStack_74);
    }
    iVar4 = 0;
    if (*param_3 == 0) {
      if (0 < iStack_74) {
        iVar6 = 0;
        do {
          puVar5 = (undefined4 *)(iVar6 + iStack_78);
          iVar3 = fn_82CE5410();
          if (param_6[1] == (param_6[2] & 0x3fffffffU)) {
                    /* WARNING: Subroutine does not return */
            fn_82CE63B0(*(undefined4 *)(iVar3 + 0x10),param_6,4);
          }
          iVar4 = iVar4 + 1;
          iVar6 = iVar6 + 4;
          *(undefined4 *)(param_6[1] * 4 + *param_6) = *puVar5;
          param_6[1] = param_6[1] + 1;
        } while (iVar4 < iStack_74);
      }
    }
    else if (0 < iStack_74) {
      iVar6 = 0;
      do {
        puVar5 = *(undefined4 **)(iVar6 + iStack_78);
        if (puVar5 != (undefined4 *)0x0) {
          (**(code **)*puVar5)(puVar5,1);
        }
        iVar4 = iVar4 + 1;
        iVar6 = iVar6 + 4;
      } while (iVar4 < iStack_74);
    }
    iVar4 = fn_82CE5410();
    iStack_74 = 0;
    if ((uStack_70 & 0x80000000) == 0) {
      (**(code **)(**(int **)(iVar4 + 0x10) + 0x10))
                (*(int **)(iVar4 + 0x10),iStack_78,uStack_70 & 0x3fffffff,4);
    }
    iStack_78 = 0;
    uStack_70 = 0x80000000;
  }
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  return param_3;
}

