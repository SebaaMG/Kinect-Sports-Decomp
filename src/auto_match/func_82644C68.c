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
extern int fn_82643B08();
extern int fn_826441E0();
extern int fn_82644B28();
extern int fn_82644DF0();
extern int fn_8264B568();


void fn_82644C68(int param_1)

{
  uint uVar1;
  uint uVar2;
  uint *puVar4;
  longlong lVar3;
  int iVar5;
  
  uVar1 = *(uint *)(param_1 + 0x3b24);
  iVar5 = *(int *)(param_1 + 0x30) + 4;
  if ((*(byte *)(param_1 + 0x2abd) & 0x20) == 0) {
    if ((*(byte *)(param_1 + 0x2abc) & 0x80) == 0) {
      if (*(int *)(param_1 + 0x3460) == 0) {
        lVar3 = fn_82644B28(param_1,*(int *)(param_1 + 0x30));
        iVar5 = fn_82644DF0(param_1,lVar3 + 4,
                                  ((uVar1 >> 0x14) + 0x200 & 0x1000) + (uVar1 & 0x1fffffff),
                                  (int)((int)(lVar3 + 4) - uVar1) >> 2,0,param_1 + 0x3500,0);
      }
      else {
        uVar2 = (int)(iVar5 - uVar1) >> 2;
        if (uVar2 != 0) {
          puVar4 = *(uint **)(param_1 + 0x350c);
          if (*(uint **)(param_1 + 0x3510) < puVar4 + 2) {
            puVar4 = (uint *)fn_82643B08(param_1 + 0x3500);
          }
          puVar4[1] = ((uVar1 >> 0x14) + 0x200 & 0x1000) + (uVar1 & 0x1fffffff);
          *puVar4 = uVar2 | 0x81000000;
          *(uint **)(param_1 + 0x350c) = puVar4 + 2;
        }
      }
    }
    else if (((*(int *)(param_1 + 0x35a0) != 0) &&
             (*(int *)(*(int *)(param_1 + 0x35a0) + 0x98) == 0)) &&
            (uVar2 = (int)(iVar5 - uVar1) >> 2, uVar2 != 0)) {
      puVar4 = *(uint **)(param_1 + 0x35b4);
      if (*(uint **)(param_1 + 0x35b8) <= puVar4) {
        puVar4 = (uint *)fn_8264B568(param_1);
      }
      *puVar4 = uVar2 | 0x81000000;
      puVar4[1] = ((uVar1 >> 0x14) + 0x200 & 0x1000) + (uVar1 & 0x1fffffff);
      *(uint **)(param_1 + 0x35b4) = puVar4 + 2;
    }
  }
  if (*(uint *)(param_1 + 0x38) < (iVar5 + 0x1fU & 0xffffffe0)) {
    *(int *)(param_1 + 0x30) = iVar5 + -4;
    fn_826441E0(param_1,0);
  }
  else {
    uVar1 = iVar5 + 0x1fU & 0xffffffe0;
    *(uint *)(param_1 + 0x3b24) = uVar1;
    *(uint *)(param_1 + 0x30) = uVar1 - 4;
  }
  return;
}

