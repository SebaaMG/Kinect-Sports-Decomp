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
extern unsigned int *auStack_40;
extern int fn_8304B7E0();
extern int fn_8304D8A0();
extern unsigned int uStack_34;
extern unsigned int uStack_4c;
extern unsigned int uStack_50;


undefined8 fn_8304B9D8(int param_1)

{
  undefined8 uVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong lVar5;
  ulonglong uVar6;
  uint uStack_50;
  uint uStack_4c;
  int aiStack_48 [2];
  undefined1 auStack_40 [12];
  ushort uStack_34;
  
  uVar6 = (ulonglong)*(uint *)(*(int *)(param_1 + 8) + 0x138);
  if (uVar6 == 0) {
    uVar1 = 2;
  }
  else {
    iVar2 = fn_8304D8A0(uVar6,*(undefined4 *)(*(int *)(param_1 + 8) + 0x13c),auStack_40,0x12,
                            param_1 + 0x10,&uStack_50,aiStack_48,(int *)(param_1 + 0x34));
    if (iVar2 == 1) {
      uVar4 = (ulonglong)uStack_34;
      *(ushort *)(param_1 + 0x3c) = uStack_34;
      lVar5 = uStack_4c + uVar6;
      iVar2 = (int)lVar5;
      *(int *)(param_1 + 0x38) = iVar2;
      lVar3 = (longlong)(int)(uStack_50 >> 6) * (longlong)(int)(uint)uStack_34 + lVar5;
      *(int *)(param_1 + 0x2c) = (int)lVar3;
      if ((aiStack_48[0] == 0) || (*(short *)(*(int *)(param_1 + 8) + 0xd4) == 1)) {
        *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x34) + iVar2;
      }
      else {
        *(uint *)(param_1 + 0x30) = (aiStack_48[0] + 1U >> 6) * (uint)uStack_34 + iVar2;
      }
      *(int *)(param_1 + 0x28) = iVar2;
      trapWord(6,uVar4,0);
      *(int *)(param_1 + 0x20) = (int)(((lVar3 - lVar5 & 0x3ffffffU) << 6) / uVar4);
      trapWord(6,uVar4,0);
      *(int *)(param_1 + 0x24) =
           (int)((((ulonglong)*(uint *)(param_1 + 0x30) - lVar5 & 0x3ffffff) << 6) /
                (ulonglong)uStack_34);
      if ((*(byte *)(*(int *)(param_1 + 8) + 0xdb) & 0x80) == 0) {
        uVar1 = 1;
      }
      else {
        uVar1 = fn_8304B7E0(param_1);
      }
    }
    else {
      uVar1 = 7;
    }
  }
  return uVar1;
}

