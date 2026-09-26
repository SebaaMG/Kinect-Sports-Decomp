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
extern int fn_827665B8();
extern int fn_82767170();
extern int fn_827675F8();
extern int fn_82769A30();
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


undefined4 * fn_8276CC18(int param_1,uint param_2)

{
  uint uVar1;
  bool bVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  undefined4 *puVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
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
  
  if (param_2 < *(uint *)(param_1 + 0x38)) {
    aiStack_90[0] = param_1 + 0x1c;
    uVar3 = fn_82767170(param_1 + 0x2c);
    fn_827675F8(aiStack_90,uVar3);
    uVar1 = *(uint *)(param_1 + 0x58);
    uVar8 = (ulonglong)uVar1;
    auStack_c0[0] = 0x102;
    uVar4 = fn_8267BED0(param_1,0x44,auStack_c0);
    if ((uVar4 & 0xffffffff) == 0) {
      puVar5 = (undefined4 *)0x0;
    }
    else {
      puVar5 = (undefined4 *)fn_82762AE0(uVar4,0xf2);
    }
    fn_82762930(&uStack_60);
    bVar2 = false;
    while (iStack_78 != 0) {
      fn_8275D280(&uStack_60);
      uStack_60 = 1;
      uStack_5c = 0;
      trapWord(6,uVar8,0);
      trapWord(6,uVar8,0);
      trapWord(5,uVar8 & ~((((ulonglong)uStack_7c & 0x1fffff) << 0xb |
                           ((ulonglong)uStack_7c & 0x3fffff) >> 0x15) - 1),0xffff);
      trapWord(5,uVar8 & ~((((ulonglong)uStack_80 & 0x1fffff) << 0xb |
                           ((ulonglong)uStack_80 & 0x3fffff) >> 0x15) - 1),0xffff);
      fn_8275FA28(&uStack_60,(int)(((ulonglong)uStack_80 & 0x3fffff) << 10) / (int)uVar1,
                   (int)(((ulonglong)uStack_7c & 0x3fffff) << 10) / (int)uVar1,0);
      while (iStack_74 != 0) {
        fn_82769A30(aiStack_90,&iStack_b0);
        trapWord(6,uVar8,0);
        trapWord(6,uVar8,0);
        if (iStack_b0 == 2) {
          trapWord(5,uVar8 & ~((((ulonglong)uStack_a8 & 0x1fffff) << 0xb |
                               ((ulonglong)uStack_a8 & 0x3fffff) >> 0x15) - 1),0xffff);
          trapWord(5,uVar8 & ~((((ulonglong)uStack_ac & 0x1fffff) << 0xb |
                               ((ulonglong)uStack_ac & 0x3fffff) >> 0x15) - 1),0xffff);
          fn_82763FD0(&uStack_60,(int)(((ulonglong)uStack_ac & 0x3fffff) << 10) / (int)uVar1,
                       (int)(((ulonglong)uStack_a8 & 0x3fffff) << 10) / (int)uVar1);
        }
        else {
          trapWord(6,uVar8,0);
          trapWord(6,uVar8,0);
          uVar4 = uVar8 & ~((((ulonglong)uStack_a0 & 0x1fffff) << 0xb |
                            ((ulonglong)uStack_a0 & 0x3fffff) >> 0x15) - 1);
          uVar6 = uVar8 & ~((((ulonglong)uStack_a4 & 0x1fffff) << 0xb |
                            ((ulonglong)uStack_a4 & 0x3fffff) >> 0x15) - 1);
          uVar7 = uVar8 & ~((((ulonglong)uStack_a8 & 0x1fffff) << 0xb |
                            ((ulonglong)uStack_a8 & 0x3fffff) >> 0x15) - 1);
          trapWord(5,uVar4,0xffff);
          trapWord(5,uVar6,0xffff);
          trapWord(5,uVar7,0xffff);
          trapWord(5,uVar8 & ~((((ulonglong)uStack_ac & 0x1fffff) << 0xb |
                               ((ulonglong)uStack_ac & 0x3fffff) >> 0x15) - 1),0xffff);
          fn_82763FE8(&uStack_60,(int)(((ulonglong)uStack_ac & 0x3fffff) << 10) / (int)uVar1,
                       (int)(((ulonglong)uStack_a8 & 0x3fffff) << 10) / (int)uVar1,
                       (int)(((ulonglong)uStack_a4 & 0x3fffff) << 10) / (int)uVar1,
                       (int)(((ulonglong)uStack_a0 & 0x3fffff) << 10) / (int)uVar1,uVar4,uVar6,uVar7
                      );
        }
      }
      if (iStack_38 != 0) {
        fn_82764008(&uStack_60);
        if (iStack_38 != 0) {
          fn_8275F338(&uStack_60,puVar5 + 10,puVar5 + 0xd);
        }
        bVar2 = true;
      }
      iStack_78 = iStack_78 + -1;
      fn_827665B8(aiStack_90);
    }
    if (!bVar2) {
      if (puVar5 != (undefined4 *)0x0) {
        (**(code **)*puVar5)(puVar5,1);
      }
      puVar5 = (undefined4 *)0x0;
    }
    fn_8267BE38(uStack_44);
  }
  else {
    puVar5 = (undefined4 *)0x0;
  }
  return puVar5;
}

