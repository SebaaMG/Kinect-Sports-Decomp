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
extern int fn_8267C4F0();
extern int fn_827903D0();


int * fn_82791CF0(int *param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  bool bVar4;
  int *piVar5;
  int iVar6;
  uint *puVar7;
  int iVar8;
  
  uVar1 = param_1[6];
  if (((int)uVar1 < 0) || (bVar4 = false, *(uint *)(param_1[5] + 4) <= uVar1)) {
    bVar4 = true;
  }
  if (bVar4) {
    iVar3 = param_1[8];
    iVar8 = *(int *)param_1[7];
    iVar6 = ((int *)param_1[7])[1] - iVar3;
    param_1[1] = iVar3;
    iVar8 = iVar3 * 2 + iVar8;
  }
  else {
    uVar2 = param_1[8];
    puVar7 = (uint *)(uVar1 * 0xc + *(int *)param_1[5]);
    uVar1 = *puVar7;
    if (uVar1 <= uVar2) {
      piVar5 = (int *)fn_827903D0(param_1,((ulonglong)uVar1 & 0x7fffffff) * 2 +
                                            (ulonglong)*(uint *)param_1[7],uVar1,puVar7[1],puVar7[2]
                                   );
      return piVar5;
    }
    iVar6 = uVar1 - uVar2;
    iVar8 = *(int *)param_1[7];
    param_1[1] = uVar2;
    iVar8 = iVar8 + uVar2 * 2;
  }
  param_1[2] = iVar6;
  *param_1 = iVar8;
  if (param_1[3] != 0) {
    fn_8267C4F0();
  }
  param_1[3] = 0;
  return param_1;
}

