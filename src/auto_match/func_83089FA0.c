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


void fn_83089FA0(int param_1,int param_2,int param_3,code *param_4)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined8 auStack_50 [10];
  
  do {
    auStack_50[0] = *(undefined8 *)((param_2 + param_3 >> 1) * 8 + param_1);
    iVar7 = param_3;
    iVar6 = param_2;
    do {
      iVar5 = iVar6 * 8 + param_1;
      cVar1 = (*param_4)(iVar5,auStack_50);
      while (cVar1 != '\0') {
        iVar5 = iVar5 + 8;
        iVar6 = iVar6 + 1;
        cVar1 = (*param_4)(iVar5,auStack_50);
      }
      iVar5 = iVar7 * 8 + param_1;
      cVar1 = (*param_4)(auStack_50,iVar5);
      while (cVar1 != '\0') {
        iVar5 = iVar5 + -8;
        iVar7 = iVar7 + -1;
        cVar1 = (*param_4)(auStack_50,iVar5);
      }
      if (iVar7 < iVar6) break;
      if (iVar7 != iVar6) {
        puVar4 = (undefined8 *)(iVar6 * 8 + param_1);
        puVar3 = (undefined8 *)(iVar7 * 8 + param_1);
        uVar2 = *puVar3;
        *(undefined4 *)puVar3 = *(undefined4 *)puVar4;
        *(undefined4 *)((int)puVar3 + 4) = *(undefined4 *)((int)puVar4 + 4);
        *puVar4 = uVar2;
      }
      iVar7 = iVar7 + -1;
      iVar6 = iVar6 + 1;
    } while (iVar6 <= iVar7);
    if (param_2 < iVar7) {
      fn_83089FA0(param_1,param_2,iVar7,param_4);
    }
    param_2 = iVar6;
    if (param_3 <= iVar6) {
      return;
    }
  } while( true );
}

