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
extern unsigned int *auStack_c0;
extern int fn_8267BE38();
extern int fn_8267BED0();
extern int fn_8275D280();
extern int fn_8275F338();
extern int fn_8275FA28();
extern int fn_82762930();
extern int fn_82762AE0();
extern int fn_82763FD0();
extern int fn_82763FE8();
extern int fn_82764008();
extern int fn_82766718();
extern int fn_82769CD8();
extern int fn_82769D28();
extern unsigned int iStack_38;
extern unsigned int iStack_74;
extern unsigned int iStack_78;
extern unsigned int iStack_b0;
extern unsigned int uStack_44;
extern unsigned int uStack_5c;
extern unsigned int uStack_60;
extern unsigned int uStack_7c;
extern unsigned int uStack_80;
extern unsigned int uStack_a0;
extern unsigned int uStack_a4;
extern unsigned int uStack_a8;
extern unsigned int uStack_ac;


undefined4 * fn_8276D828(int param_1,ulonglong param_2)

{
  uint uVar1;
  bool bVar2;
  ulonglong uVar3;
  undefined4 *puVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  undefined4 auStack_c0 [4];
  int iStack_b0;
  uint uStack_ac;
  uint uStack_a8;
  uint uStack_a4;
  uint uStack_a0;
  int aiStack_90 [4];
  uint uStack_80;
  uint uStack_7c;
  int iStack_78;
  int iStack_74;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_44;
  int iStack_38;
  
  if ((param_2 & 0xffffffff) < (ulonglong)*(uint *)(param_1 + 0x34)) {
    aiStack_90[0] = param_1 + 0x1c;
    fn_82769CD8(param_1 + 0x28,param_2,aiStack_90);
    auStack_c0[0] = 0x102;
    uVar1 = *(uint *)(param_1 + 0x54);
    uVar7 = (ulonglong)uVar1;
    uVar3 = fn_8267BED0(param_1,0x44,auStack_c0);
    if ((uVar3 & 0xffffffff) == 0) {
      puVar4 = (undefined4 *)0x0;
    }
    else {
      puVar4 = (undefined4 *)fn_82762AE0(uVar3,0xf2);
    }
    fn_82762930(&uStack_60);
    bVar2 = false;
    while (iStack_78 != 0) {
      fn_8275D280(&uStack_60);
      uStack_60 = 1;
      uStack_5c = 0;
      trapWord(6,uVar7,0);
      trapWord(6,uVar7,0);
      trapWord(5,uVar7 & ~((((ulonglong)uStack_7c & 0x1fffff) << 0xb |
                           ((ulonglong)uStack_7c & 0x3fffff) >> 0x15) - 1),0xffff);
      trapWord(5,uVar7 & ~((((ulonglong)uStack_80 & 0x1fffff) << 0xb |
                           ((ulonglong)uStack_80 & 0x3fffff) >> 0x15) - 1),0xffff);
      fn_8275FA28(&uStack_60,(int)(((ulonglong)uStack_80 & 0x3fffff) << 10) / (int)uVar1,
                   (int)(((ulonglong)uStack_7c & 0x3fffff) << 10) / (int)uVar1,0);
      while (iStack_74 != 0) {
        fn_82769D28(aiStack_90,&iStack_b0);
        trapWord(6,uVar7,0);
        trapWord(6,uVar7,0);
        if (iStack_b0 == 2) {
          trapWord(5,uVar7 & ~((((ulonglong)uStack_a8 & 0x1fffff) << 0xb |
                               ((ulonglong)uStack_a8 & 0x3fffff) >> 0x15) - 1),0xffff);
          trapWord(5,uVar7 & ~((((ulonglong)uStack_ac & 0x1fffff) << 0xb |
                               ((ulonglong)uStack_ac & 0x3fffff) >> 0x15) - 1),0xffff);
          fn_82763FD0(&uStack_60,(int)(((ulonglong)uStack_ac & 0x3fffff) << 10) / (int)uVar1,
                       (int)(((ulonglong)uStack_a8 & 0x3fffff) << 10) / (int)uVar1);
        }
        else {
          trapWord(6,uVar7,0);
          trapWord(6,uVar7,0);
          uVar3 = uVar7 & ~((((ulonglong)uStack_a0 & 0x1fffff) << 0xb |
                            ((ulonglong)uStack_a0 & 0x3fffff) >> 0x15) - 1);
          uVar5 = uVar7 & ~((((ulonglong)uStack_a4 & 0x1fffff) << 0xb |
                            ((ulonglong)uStack_a4 & 0x3fffff) >> 0x15) - 1);
          uVar6 = uVar7 & ~((((ulonglong)uStack_a8 & 0x1fffff) << 0xb |
                            ((ulonglong)uStack_a8 & 0x3fffff) >> 0x15) - 1);
          trapWord(5,uVar3,0xffff);
          trapWord(5,uVar5,0xffff);
          trapWord(5,uVar6,0xffff);
          trapWord(5,uVar7 & ~((((ulonglong)uStack_ac & 0x1fffff) << 0xb |
                               ((ulonglong)uStack_ac & 0x3fffff) >> 0x15) - 1),0xffff);
          fn_82763FE8(&uStack_60,(int)(((ulonglong)uStack_ac & 0x3fffff) << 10) / (int)uVar1,
                       (int)(((ulonglong)uStack_a8 & 0x3fffff) << 10) / (int)uVar1,
                       (int)(((ulonglong)uStack_a4 & 0x3fffff) << 10) / (int)uVar1,
                       (int)(((ulonglong)uStack_a0 & 0x3fffff) << 10) / (int)uVar1,uVar3,uVar5,uVar6
                      );
        }
      }
      if (iStack_38 != 0) {
        fn_82764008(&uStack_60);
        if (iStack_38 != 0) {
          fn_8275F338(&uStack_60,puVar4 + 10,puVar4 + 0xd);
        }
        bVar2 = true;
      }
      iStack_78 = iStack_78 + -1;
      fn_82766718(aiStack_90);
    }
    if (!bVar2) {
      if (puVar4 != (undefined4 *)0x0) {
        (**(code **)*puVar4)(puVar4,1);
      }
      puVar4 = (undefined4 *)0x0;
    }
    fn_8267BE38(uStack_44);
  }
  else {
    puVar4 = (undefined4 *)0x0;
  }
  return puVar4;
}

