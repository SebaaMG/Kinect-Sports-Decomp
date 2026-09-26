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
extern int fn_827E0250();


undefined4 * fn_827E0580(undefined4 *param_1,int param_2,uint *param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  
  iVar4 = fn_827E0250(param_2,param_3);
  puVar1 = *(undefined4 **)(param_2 + 4);
  iVar3 = *(int *)(param_2 + 0x44) + iVar4 * 8;
  puVar2 = *(undefined4 **)(*(int *)(param_2 + 0x44) + iVar4 * 8);
  puVar7 = puVar2;
  while( true ) {
    puVar5 = puVar1;
    if (puVar2 != puVar1) {
      puVar5 = (undefined4 *)**(undefined4 **)(iVar3 + 4);
    }
    if (puVar7 == puVar5) goto LAB_827e063c;
    puVar5 = puVar7;
    if (*param_3 <= (uint)puVar7[2]) break;
    puVar7 = (undefined4 *)*puVar7;
  }
  while( true ) {
    puVar6 = puVar1;
    if (puVar2 != puVar1) {
      puVar6 = (undefined4 *)**(undefined4 **)(iVar3 + 4);
    }
    if ((puVar5 == puVar6) || (*param_3 < (uint)puVar5[2])) break;
    puVar5 = (undefined4 *)*puVar5;
  }
  if (puVar7 == puVar5) {
LAB_827e063c:
    puVar5 = *(undefined4 **)(param_2 + 4);
    *param_1 = puVar5;
  }
  else {
    *param_1 = puVar7;
  }
  param_1[1] = puVar5;
  return param_1;
}

