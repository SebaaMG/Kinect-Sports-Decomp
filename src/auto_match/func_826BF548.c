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
extern int fn_8267BE38();
extern int fn_82681F28();
extern int fn_82682070();
extern int fn_82682298();
extern unsigned int lbl_8200B5A8;


void fn_826BF548(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  char cVar4;
  uint uVar5;
  ulonglong uVar6;
  int *apiStack_20 [4];
  
  *param_1 = &lbl_8200B5A8;
  piVar3 = (int *)param_1[1];
  if (piVar3 == (int *)0x0) {
    return;
  }
  if ((piVar3[2] & 0xfffffffU) == 0) {
    return;
  }
  uVar6 = (ulonglong)(uint)piVar3[2] - 1;
  piVar3[2] = (uint)uVar6;
  if ((uVar6 & 0xfffffff) == 0) {
    (**(code **)*piVar3)(piVar3,0);
    uVar5 = piVar3[2];
    piVar3[2] = uVar5 & 0x8fffffff;
    if ((int)uVar5 < 0) {
      piVar1 = (int *)piVar3[1];
      uVar5 = piVar3[3];
      if (uVar5 + 1 == *piVar1) {
        fn_82681F28();
      }
      else {
        *(uint *)(*(int *)((uVar5 >> 8 & 0xfffffc) + piVar1[3]) + (uVar5 & 0x3ff) * 4) =
             piVar1[4] << 1 | 1;
        *(int *)(piVar3[1] + 0x10) = piVar3[3];
      }
    }
    (**(code **)(*piVar3 + 4))(piVar3);
    fn_8267BE38(piVar3);
    return;
  }
  if ((uVar6 & 0x70000000) != 0x30000000) {
    uVar5 = (uint)uVar6 & 0x8fffffff;
    piVar3[2] = uVar5 | 0x30000000;
    if ((uVar6 & 0x8fffffff) >> 0x1f != 0) {
      return;
    }
    piVar1 = (int *)piVar3[1];
    uVar5 = uVar5 | 0xb0000000;
    iVar2 = piVar1[4];
    if (iVar2 == -1) {
      iVar2 = *piVar1;
      piVar3[2] = uVar5;
      piVar3[3] = iVar2;
      *(byte *)(piVar1 + 6) = *(byte *)(piVar1 + 6) | 1;
      apiStack_20[0] = piVar3;
      cVar4 = fn_82682070(piVar3[1],apiStack_20);
      *(byte *)(piVar3[1] + 0x18) = *(byte *)(piVar3[1] + 0x18) & 0xfe;
      if (cVar4 == '\0') {
        cVar4 = fn_82682298(piVar3[1],0);
        *(byte *)(piVar3[1] + 0x18) = *(byte *)(piVar3[1] + 0x18) | 1;
        if ((cVar4 == '\0') ||
           (apiStack_20[0] = piVar3, cVar4 = fn_82682070(piVar3[1],apiStack_20), cVar4 == '\0'
           )) {
          piVar3[3] = -1;
          piVar3[2] = piVar3[2] & 0xfffffff;
        }
        *(byte *)(piVar3[1] + 0x18) = *(byte *)(piVar3[1] + 0x18) & 0xfe;
        return;
      }
      return;
    }
    piVar3[2] = uVar5;
    piVar3[3] = iVar2;
    uVar5 = piVar1[4];
    iVar2 = *(int *)(*(int *)((uVar5 >> 8 & 0xfffffc) + piVar1[3]) + (uVar5 & 0x3ff) * 4);
    *(int **)(*(int *)((uVar5 >> 8 & 0xfffffc) + piVar1[3]) + (uVar5 & 0x3ff) * 4) = piVar3;
    *(int *)(piVar3[1] + 0x10) = iVar2 >> 1;
    return;
  }
  return;
}

