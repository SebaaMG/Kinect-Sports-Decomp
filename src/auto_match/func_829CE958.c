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
#define TBLr 0
extern unsigned int *auStack_30;
extern int fn_8264D6C0();
extern int fn_829C5960();
extern int fn_829C7030();
extern int fn_829C9540();
extern int fn_829CB790();
extern int fn_829CB8E8();
extern int fn_829CCBC0();
extern int fn_829CD2E0();
extern int fn_829CE110();
extern int fn_829F4E60();
extern unsigned int lbl_83215008;
extern unsigned int lbl_83215060;
extern unsigned int lbl_83215068;
extern unsigned int lbl_83215074;
extern unsigned int lbl_83215078;
extern unsigned int lbl_83217238;
extern unsigned int lbl_83217270;
extern unsigned int lbl_832177B4;
extern unsigned int lbl_832177BC;


int fn_829CE958(void)

{
  undefined8 uVar1;
  int iVar3;
  uint *puVar4;
  longlong lVar2;
  undefined8 *puVar5;
  undefined4 uVar6;
  undefined8 auStack_30 [6];
  
  iVar3 = fn_829C9540();
  if (iVar3 != 0) {
    puVar4 = (uint *)fn_829CD2E0();
    *(uint **)(iVar3 + 0x110) = puVar4;
    if (puVar4 != (uint *)0x0) {
      uVar1 = TBLr;
      *(int *)(iVar3 + 0x120) = (int)uVar1;
      if ((*puVar4 & 0x40) == 0) {
        if (lbl_83215078 == 1) {
          lbl_83215078 = 0;
          lbl_83215074 = *(int *)(*(int *)(iVar3 + 0x110) + 0x48);
        }
        *(int *)(*(int *)(iVar3 + 0x110) + 0x48) =
             *(int *)(*(int *)(iVar3 + 0x110) + 0x48) - lbl_83215074;
      }
      if ((**(uint **)(iVar3 + 0x110) & 0x20) == 0x20) {
        fn_829CCBC0();
      }
      if (lbl_83215008 != 0) {
        fn_829CB8E8(*(undefined4 *)(iVar3 + 0x110));
        fn_829C5960();
        if (*(int *)(iVar3 + 0x118) == 0) {
          uVar6 = 0;
        }
        else {
          uVar6 = *(undefined4 *)(*(int *)(iVar3 + 0x118) + 100);
        }
        RtlEnterCriticalSection(0xffffffff8315c3cc);
        puVar5 = &lbl_832177BC;
        if (lbl_83215060 == 0) {
          puVar5 = &lbl_832177B4;
        }
        auStack_30[0] = *puVar5;
        RtlLeaveCriticalSection(0xffffffff8315c3cc);
        fn_829F4E60(*(undefined4 *)(*(int *)(iVar3 + 0x110) + 100),lbl_83217238,auStack_30,
                          uVar6,(ulonglong)*(uint *)(lbl_83217270 + 0x70) +
                                (ulonglong)*(uint *)(iVar3 + 0x11c),iVar3,iVar3 + 0x20);
        fn_829C7030(iVar3);
        if ((ulonglong)*(uint *)(iVar3 + 0x118) != 0) {
          fn_829CB790((ulonglong)*(uint *)(iVar3 + 0x118) + 0x30);
        }
        lVar2 = (ulonglong)*(uint *)(lbl_83217270 + 0x70) + (ulonglong)*(uint *)(iVar3 + 0x11c);
        fn_8264D6C0(lVar2,lVar2 + 0x4b00,1);
      }
      lVar2 = (ulonglong)*(uint *)(*(int *)(iVar3 + 0x110) + 0x68) + (ulonglong)lbl_83215068;
      fn_8264D6C0(lVar2,lVar2 + 0x96000,1);
      uVar1 = TBLr;
      *(int *)(iVar3 + 0x124) = (int)uVar1;
      return iVar3;
    }
    fn_829CE110(iVar3);
  }
  return 0;
}

