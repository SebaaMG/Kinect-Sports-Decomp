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
extern int fn_82F63F40();


void fn_827BD9D0(int *param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  int iVar4;
  bool bVar5;
  int iVar6;
  char *pcVar7;
  char cVar8;
  
  iVar1 = *param_1;
  iVar2 = *(int *)(iVar1 + 0x14);
  if ((iVar2 < 1) || (*(int *)(iVar1 + 0x74) < iVar2)) {
    iVar4 = *(int *)(iVar1 + 0x78);
    if ((iVar4 != 0) && ((*(int *)(iVar1 + 0x7c) <= iVar2 && (iVar2 <= *(int *)(iVar1 + 0x80))))) {
      iVar6 = (iVar2 - *(int *)(iVar1 + 0x7c)) * 4;
      goto LAB_827bda3c;
    }
  }
  else {
    iVar6 = *(int *)(iVar1 + 0x70);
    iVar4 = iVar2 << 2;
LAB_827bda3c:
    pcVar3 = *(char **)(iVar6 + iVar4);
    if (pcVar3 != (char *)0x0) goto LAB_827bda54;
  }
  *(int *)(iVar1 + 0x18) = iVar2;
  pcVar3 = (char *)**(undefined4 **)(iVar1 + 0x70);
LAB_827bda54:
  cVar8 = *pcVar3;
  bVar5 = false;
  pcVar7 = pcVar3;
  do {
    if (cVar8 == '\0') {
LAB_827bda90:
      if (bVar5) {
        fn_82F63F40(param_2,pcVar3,iVar1 + 0x18);
      }
      else {
        fn_82F63F40(param_2,pcVar3,*(undefined4 *)(iVar1 + 0x18),*(undefined4 *)(iVar1 + 0x1c)
                          ,*(undefined4 *)(iVar1 + 0x20),*(undefined4 *)(iVar1 + 0x24),
                          *(undefined4 *)(iVar1 + 0x28),*(undefined4 *)(iVar1 + 0x2c));
      }
      return;
    }
    pcVar7 = pcVar7 + 1;
    if (cVar8 == '%') {
      if (*pcVar7 == 's') {
        bVar5 = true;
      }
      goto LAB_827bda90;
    }
    cVar8 = *pcVar7;
  } while( true );
}

