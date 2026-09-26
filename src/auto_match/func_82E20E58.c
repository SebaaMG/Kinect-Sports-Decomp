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
extern int fn_8265CAA0();
extern int fn_82E1D550();
extern int fn_82E1DF00();
extern int fn_82E20100();
extern int fn_82E205A0();
extern int fn_82E205F8();
extern int fn_82E20810();
extern int fn_82E208B0();
extern int fn_82E209B0();
extern int fn_82E20A98();
extern int fn_82E22508();


void fn_82E20E58(int param_1)

{
  char cVar1;
  int iVar3;
  char cVar4;
  longlong lVar2;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  
  if (*(char *)(param_1 + 2) == '\0') {
    iVar3 = fn_82E1D550();
    cVar4 = fn_82E1DF00(*(undefined4 *)(iVar3 + 8),0xffffffff8214b848,0);
    if (cVar4 != '\0') {
      fn_82E209B0(param_1);
    }
    if ((*(int *)(param_1 + 8) != 0) && (*(undefined4 **)(param_1 + 0xc) != (undefined4 *)0x0)) {
      puVar9 = *(undefined4 **)(param_1 + 0xc);
      do {
        puVar8 = (undefined4 *)0x0;
        if (puVar9 != (undefined4 *)0x0) {
          puVar8 = (undefined4 *)*puVar9;
        }
        pcVar7 = (char *)puVar9[2];
        pcVar6 = pcVar7;
        pcVar5 = "Waiting";
        do {
          cVar4 = *pcVar6;
          cVar1 = *pcVar5;
          if (cVar4 == '\0') break;
          pcVar6 = pcVar6 + 1;
          pcVar5 = pcVar5 + 1;
        } while (cVar4 == cVar1);
        pcVar6 = "Uploading";
        if (cVar4 == cVar1) {
          lVar2 = fn_82E20100(puVar9[1],1);
          if (lVar2 == 0) {
            fn_82E205A0(puVar9,0xffffffff8214bc00);
            fn_82E205F8(puVar9,0);
            fn_82E208B0(param_1,puVar9,0xffffffff8214bc08);
          }
          else {
            fn_82E22508(*(undefined4 *)(param_1 + 8),lVar2);
            fn_82E205A0(puVar9,0xffffffff8214bc2c);
            fn_82E205F8(puVar9,0);
            fn_82E208B0(param_1,puVar9,0xffffffff8214bc38);
            fn_8265CAA0(lVar2);
          }
        }
        else {
          do {
            cVar4 = *pcVar7;
            cVar1 = *pcVar6;
            if (cVar4 == '\0') break;
            pcVar7 = pcVar7 + 1;
            pcVar6 = pcVar6 + 1;
          } while (cVar4 == cVar1);
          if (cVar4 == cVar1) {
            fn_82E205F8(puVar9,0);
            fn_82E208B0(param_1,puVar9,0xffffffff8214bc4c);
            fn_82E20810(param_1,puVar9);
          }
        }
        puVar9 = puVar8;
      } while (puVar8 != (undefined4 *)0x0);
    }
    fn_82E20A98(param_1);
  }
  return;
}

