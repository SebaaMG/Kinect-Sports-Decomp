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
extern unsigned int *auStack_3c;
extern unsigned int fStack_30;
extern unsigned int fStack_34;
extern unsigned int fStack_38;
extern int fn_82810328();
extern int fn_8286D3A0();
extern int fn_8286D418();
extern unsigned int iStack_40;


int fn_8286CEF8(int param_1)

{
  int iVar1;
  ulonglong uVar2;
  longlong lVar3;
  undefined4 *puVar4;
  bool bVar5;
  int iStack_40;
  undefined1 auStack_3c [4];
  float fStack_38;
  float fStack_34;
  float fStack_30;
  
  if (*(char *)(param_1 + 4) != '\0') {
    uVar2 = (ulonglong)*(uint *)(param_1 + 0x1c);
    if (uVar2 != 0) {
      if (0x13 < (int)*(uint *)(param_1 + 0x1c)) {
        uVar2 = 0x14;
      }
      lVar3 = (ulonglong)*(uint *)(param_1 + 0xc) - 1;
      *(int *)(param_1 + 0xc) = (int)lVar3;
      if ((-1 < lVar3) && (0 < (int)uVar2)) {
        puVar4 = (undefined4 *)(param_1 + 0x18);
        do {
          iVar1 = *(int *)(*(int *)*puVar4 + 8);
          iStack_40 = iVar1;
          fn_8286D418(auStack_3c,puVar4,*(int *)*puVar4);
          fn_8286D3A0(puVar4,*puVar4,&iStack_40);
          if (*(char *)(iVar1 + 4) != '\0') {
            fn_82810328(iVar1 + 0x14,iVar1 + 8,&fStack_38);
            bVar5 = *(float *)(param_1 + 0x14) <
                    fStack_38 * fStack_38 + fStack_30 * fStack_30 + fStack_34 * fStack_34;
            *(bool *)(iVar1 + 0x5a) = bVar5;
            if (!bVar5) {
              return iVar1;
            }
          }
          uVar2 = uVar2 - 1;
        } while (0 < (longlong)uVar2);
      }
      *(undefined4 *)(param_1 + 0xc) = 0;
    }
  }
  return 0;
}

