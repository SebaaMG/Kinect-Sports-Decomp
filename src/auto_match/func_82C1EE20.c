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
extern unsigned int *auStack_60;
extern int fn_82C1E938();
extern int fn_82C1EAB8();


undefined8 fn_82C1EE20(int param_1,undefined4 *param_2,int *param_3,uint *param_4,int *param_5)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  char cVar4;
  char cVar5;
  char cVar6;
  undefined1 auStack_60 [96];
  
  piVar1 = *(int **)(param_1 + 0x1c);
  if ((((piVar1 == (int *)0x0) || (param_2 == (undefined4 *)0x0)) || (param_4 == (uint *)0x0)) ||
     ((param_5 == (int *)0x0 || (param_3 == (int *)0x0)))) {
    uVar3 = 0xffffffff80070057;
  }
  else {
    *param_2 = 0;
    *(undefined2 *)(param_2 + 1) = 0;
    *(undefined2 *)((int)param_2 + 6) = 0;
    *(undefined1 *)(param_2 + 2) = 0;
    *(undefined1 *)((int)param_2 + 9) = 0;
    *(undefined1 *)((int)param_2 + 10) = 0;
    *(undefined1 *)((int)param_2 + 0xb) = 0;
    *(undefined1 *)(param_2 + 3) = 0;
    *(undefined1 *)((int)param_2 + 0xd) = 0;
    *(undefined1 *)((int)param_2 + 0xe) = 0;
    *(undefined1 *)((int)param_2 + 0xf) = 0;
    uVar3 = fn_82C1EAB8(param_1,param_2,param_3,param_4,param_5);
    if (((-1 < (int)uVar3) &&
        (uVar3 = fn_82C1E938(param_1,param_2 + 1,param_3,param_4,param_5), -1 < (int)uVar3)) &&
       (uVar3 = fn_82C1E938(param_1,(int)param_2 + 6,param_3,param_4,param_5), -1 < (int)uVar3)) {
      cVar4 = '\0';
      cVar6 = '\0';
      do {
        if (*param_4 == 0) {
          uVar3 = (**(code **)(*piVar1 + 0x10))(*piVar1,*param_5,param_3,param_4,auStack_60);
          if ((int)uVar3 < 0) {
            return uVar3;
          }
          cVar6 = '\0';
          *(ulonglong *)(piVar1 + 2) = (ulonglong)*param_4 + *(longlong *)(piVar1 + 2);
          *param_5 = *param_5 - *param_4;
        }
        cVar5 = cVar6 + '\x01';
        iVar2 = (int)cVar4;
        cVar4 = cVar4 + '\x01';
        *(undefined1 *)((int)param_2 + iVar2 + 8) = *(undefined1 *)(*param_3 + (int)cVar6);
        *param_4 = *param_4 - 1;
        cVar6 = cVar5;
      } while (cVar4 < '\b');
      *param_3 = (int)cVar5 + *param_3;
    }
  }
  return uVar3;
}

