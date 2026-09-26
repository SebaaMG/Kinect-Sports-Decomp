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
extern int fn_82590DB8();
extern int fn_82591730();
extern unsigned int iStack00000024;


undefined8 fn_82618028(int param_1,int param_2,int param_3)

{
  undefined4 *puVar1;
  int in_r0;
  undefined8 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iStack00000024;
  
  iStack00000024 = param_3;
  if (param_2 == 5) {
    *(undefined4 *)(*(int *)(param_1 + 4) + 400) = 1;
    fn_82590DB8(param_1,0,0);
    iVar3 = 0xa0;
    puVar1 = (undefined4 *)(*(int *)(param_1 + 4) + 0xa0U & 0xfffffff0);
    uVar4 = *puVar1;
    uVar5 = puVar1[1];
    uVar6 = puVar1[2];
    uVar7 = puVar1[3];
  }
  else {
    if (param_2 == 8) {
      *(undefined4 *)(*(int *)(param_1 + 4) + 400) = 1;
      *(int *)(param_1 + 0xb0) = param_3;
      return 1;
    }
    if (param_2 != 0xd) {
      if (param_2 == 0x17) {
        *(int *)(param_1 + 0x10) = param_3;
        *(undefined1 *)(param_1 + 0xc6) = 1;
        return 1;
      }
      uVar2 = fn_82591730();
      return uVar2;
    }
    puVar1 = (undefined4 *)(in_r0 + param_3 & 0xfffffff0);
    uVar4 = *puVar1;
    uVar5 = puVar1[1];
    uVar6 = puVar1[2];
    uVar7 = puVar1[3];
    iVar3 = 0x60;
  }
  puVar1 = (undefined4 *)(param_1 + iVar3 & 0xfffffff0);
  *puVar1 = uVar4;
  puVar1[1] = uVar5;
  puVar1[2] = uVar6;
  puVar1[3] = uVar7;
  return 1;
}

