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
extern int fn_82381BC0();
extern int fn_823AA970();
extern int fn_8265C9E0();
extern int fn_82886518();
extern int fn_82897BD0();
extern int fn_828ACCE8();
extern int fn_828BE158();
extern int fn_828D2DB8();
extern int fn_828D2EE0();
extern int fn_828D2F28();
extern int fn_828DB208();
extern int fn_828DD9D8();
extern unsigned int uStack_43;
extern unsigned int uStack_44;
extern unsigned int uStack_48;


void fn_828DB2F8(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  char cVar6;
  ulonglong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar7;
  int aiStack_50 [2];
  undefined4 uStack_48;
  undefined1 uStack_44;
  undefined1 uStack_43;
  
  cVar6 = fn_828ACCE8(*(undefined4 *)(param_1 + 8));
  if (cVar6 == '\0') {
    fn_828D2F28();
  }
  else {
    uVar3 = fn_828D2EE0(param_1);
    if (0x5dc < uVar3) {
      iVar1 = *(int *)(param_1 + 8);
      aiStack_50[0] = **(int **)(iVar1 + 0x210);
      uVar7 = *(undefined8 *)(*(int *)(iVar1 + 0x8c) + 0x50);
      if (aiStack_50[0] != *(int *)(iVar1 + 0x210)) {
        do {
          uVar2 = *(undefined4 *)(aiStack_50[0] + 0x10);
          uVar3 = fn_8265C9E0(0x98);
          if ((uVar3 & 0xffffffff) == 0) {
            uVar4 = 0;
          }
          else {
            uVar4 = fn_828DD9D8(uVar3,uVar7);
          }
          fn_82886518(uVar4,0xffffffffffffffff,0xffffffffffffffff);
          uVar5 = fn_82897BD0(uVar2);
          fn_828BE158(*(undefined4 *)(param_1 + 8),uVar4,uVar5,0);
          uStack_48 = fn_823AA970(uVar2);
          uStack_44 = 0;
          uStack_43 = 0;
          fn_828DB208(param_1 + 0x18,&uStack_48);
          fn_82381BC0(aiStack_50);
        } while (aiStack_50[0] != *(int *)(*(int *)(param_1 + 8) + 0x210));
      }
      fn_828D2DB8(param_1,5);
    }
  }
  return;
}

