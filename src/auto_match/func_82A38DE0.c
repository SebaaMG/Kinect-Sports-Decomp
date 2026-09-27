extern int *piRam83219598;
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
extern unsigned int *auStack_130;
extern unsigned int *auStack_140;
extern unsigned int *auStack_148;
extern unsigned int *auStack_160;
extern int fn_82A381F0();
extern int memcpy();
extern unsigned int uStack_138;
extern unsigned int uStack_150;
extern unsigned int uStack_158;


longlong fn_82A38DE0(undefined8 param_1)

{
  int *piVar1;
  longlong lVar2;
  int iVar3;
  int in_r8;
  undefined4 auStack_160 [2];
  undefined4 uStack_158;
  undefined1 *puStack_154;
  undefined4 uStack_150;
  undefined1 auStack_148 [8];
  undefined1 auStack_140 [8];
  undefined8 uStack_138;
  undefined1 auStack_130 [304];

  piVar1 = piRam83219598;
  lVar2 = (**(code **)(*piRam83219598 + 0x18))(param_1);
  if (-1 < lVar2) {
    iVar3 = *(int *)(in_r8 + 0x3c);
    memcpy(auStack_130,in_r8 + 0x40,iVar3);
    auStack_130[iVar3] = 0;
    RtlInitAnsiString(auStack_140,auStack_130);
    puStack_154 = auStack_140;
    uStack_158 = (undefined4)param_1;
    uStack_150 = 0x40;
    lVar2 = (*(code *)piVar1[3])(auStack_160,0xffffffff80120089,&uStack_158,auStack_148,0,0,0,1);
    if (-1 < lVar2) {
      iVar3 = fn_82A381F0(piVar1 + 0x14,auStack_160[0],0);
      if ((iVar3 != 0) &&
         (lVar2 = (*(code *)piVar1[8])(auStack_160[0],auStack_148,&uStack_138,8,0x14), -1 < lVar2))
      {
        *(undefined8 *)(in_r8 + 0x28) = uStack_138;
      }
      (*(code *)piVar1[1])(auStack_160[0]);
    }
  }
  return lVar2;
}
