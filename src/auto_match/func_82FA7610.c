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
extern unsigned int *auStack_38;
extern int fn_82FA73C8();
extern int fn_82FA7C48();
extern int fn_82FA7CD0();
extern int fn_82FAABA8();
extern unsigned int iStack_40;
extern unsigned int lbl_831BC680;
extern unsigned int uStack_3c;


undefined8 fn_82FA7610(ulonglong param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar3;
  undefined4 *puVar4;
  undefined8 uVar2;
  int iStack_40;
  undefined4 uStack_3c;
  undefined4 auStack_38 [14];
  
  iStack_40 = 0;
  iVar3 = fn_82FA73C8(param_1,&iStack_40,&uStack_3c,auStack_38);
  if (0 < iVar3) {
    puVar4 = (undefined4 *)fn_82FA7C48(0xffffffff831bc680);
    if (puVar4 == (undefined4 *)0x0) {
      piVar1 = lbl_831BC680;
      if (lbl_831BC680 != (int *)0x0) {
        do {
          if ((ulonglong)(uint)piVar1[1] == (param_1 & 0xffffffff)) {
            piVar1[3] = piVar1[3] | 0x80000000;
          }
          piVar1 = (int *)*piVar1;
        } while (piVar1 != (int *)0x0);
        return 0;
      }
    }
    else {
      uVar2 = fn_82FAABA8(*(undefined4 *)(iStack_40 + 0x38),puVar4,auStack_38[0],uStack_3c);
      if ((int)uVar2 == 1) {
        *puVar4 = (int)param_1;
        puVar4[1] = param_2;
        puVar4[2] = puVar4[2] & 0x3fffffff | 0x40000000;
        return uVar2;
      }
      fn_82FA7CD0(0xffffffff831bc680);
    }
  }
  return 0;
}

