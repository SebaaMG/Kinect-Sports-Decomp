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
extern int fn_827B76D8();
extern int fn_827B8DB0();
extern int fn_827B8E10();
extern int fn_827B8FC8();
extern int fn_827B9368();


undefined4 * fn_827B93C0(uint *param_1,undefined4 *param_2,ulonglong param_3,undefined8 param_4)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  uint *puVar4;
  undefined4 *apuStack_40 [2];
  undefined4 *puStack_38;
  undefined4 **ppuStack_34;
  
  uVar3 = (uint)param_4;
  if (((param_1[5] < uVar3) || ((param_3 & 0xffffffff) == 0)) || (uVar3 == 0)) {
    apuStack_40[0] = (undefined4 *)0x0;
  }
  else {
    if (uVar3 < *param_1) {
      *param_1 = uVar3;
    }
    if ((param_3 & 0xffffffff) < (ulonglong)*param_1) {
      *param_1 = (uint)param_3;
    }
    apuStack_40[0] = (undefined4 *)fn_827B8DB0(param_1,param_3,param_4);
    if (((apuStack_40[0] == (undefined4 *)0x0) &&
        (apuStack_40[0] = (undefined4 *)fn_827B8E10(param_1,param_3,param_4),
        apuStack_40[0] == (undefined4 *)0x0)) &&
       (apuStack_40[0] = (undefined4 *)fn_827B8FC8(param_1,param_3,param_4),
       apuStack_40[0] == (undefined4 *)0x0)) {
      return (undefined4 *)0x0;
    }
    puVar4 = param_1 + 0x21;
    *apuStack_40[0] = *param_2;
    apuStack_40[0][1] = param_2[1];
    apuStack_40[0][2] = param_2[2];
    *(undefined2 *)(apuStack_40[0] + 8) = 0;
    *(undefined2 *)((int)apuStack_40[0] + 0x22) = 0;
    puVar1 = (uint *)apuStack_40[0][3];
    *(uint *)(*puVar1 + 4) = puVar1[1];
    *(uint *)puVar1[1] = *puVar1;
    *puVar1 = param_1[0xc];
    puVar1[1] = (uint)(param_1 + 0xc);
    *(uint **)(param_1[0xc] + 4) = puVar1;
    param_1[0xc] = (uint)puVar1;
    iVar2 = fn_827B76D8(puVar4,param_2);
    if (iVar2 == 0) {
      ppuStack_34 = apuStack_40;
      puStack_38 = param_2;
      fn_827B9368(puVar4,puVar4,&puStack_38);
    }
  }
  return apuStack_40[0];
}

